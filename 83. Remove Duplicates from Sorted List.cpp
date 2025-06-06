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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;
        set<int>st;
        ListNode* newHead = new ListNode(head->val);
        ListNode* list = newHead ;
        st.insert(head->val);
        head = head->next;

        while(head != nullptr){
            auto insert = st.insert(head->val);
            if (insert.second) {
                list->next = new ListNode(head->val);
                list = list->next;
            }
            head = head->next;

        }

        return newHead;
    }
};
