/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insertInSet(multiset<int>& ms, ListNode* head) {
        while(head){
            ms.insert(head->val);
            head = head->next;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        multiset<int> ms;

        insertInSet(ms, list1);
        insertInSet(ms, list2);

        if (ms.size()) {
            auto it = ms.begin();
            ListNode* head = new ListNode(*it++);
            ListNode* current = head;

            while(it != ms.end()) {
                current->next = new ListNode(*it++);
                current = current->next;
            }
            return head;
        } else {
            ListNode* head = nullptr;
            return head;
        }

    }
};
