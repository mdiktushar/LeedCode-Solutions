class Solution {
public:
    bool isValid(string s) {
        vector<char>v;

        bool loopComplete = false;
        for(int i=0; i<s.size(); i++)
        {
            char c = s[i];
            if (c == '(' ||  c == '{' || c == '[')
                v.push_back(c);

            else if (!v.size() && (c == ')' || c == '}' || c == ']'))
                break;
            else if (v.back() == '(')
            {
                if (c == ')')
                    v.pop_back();
                else break;
            }
            else if (v.back() == '{')
            {
                if (c == '}')
                    v.pop_back();
                else break;
            }
            else
            {
                if (c == ']')
                    v.pop_back();
                else break;
            }

            if (i == s.size() - 1)
                loopComplete = true;
        }
        return loopComplete && !v.size();

    }
};
