class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>v1,v2;
        for (int i = 'a'; i <= 'z'; i++)
        {
            int c = count(ransomNote.begin(), ransomNote.end(), char(i));
            v1.push_back(c);
            c = count(magazine.begin(), magazine.end(), char(i));
            v2.push_back(c);
        }

        bool f = true;
        for (int i = 0; i < 26; i++){
            if (v2[i] < v1[i]) {
                f = false;
                break;
            }
        }
        return f;
    }
};
