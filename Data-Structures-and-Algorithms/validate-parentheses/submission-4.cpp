class Solution {
public:
    bool isValid(string s) {
        if (s.size() < 2) return false;

        stack<char> grp;

        for (char x : s) {
            switch (x) {
                case '(':
                case '{':
                case '[':
                    grp.push(x);
                    break;

                case ')':
                    if (grp.empty() || grp.top() != '(')
                        return false;
                    grp.pop();
                    break;

                case '}':
                    if (grp.empty() || grp.top() != '{')
                        return false;
                    grp.pop();
                    break;

                case ']':
                    if (grp.empty() || grp.top() != '[')
                        return false;
                    grp.pop();
                    break;
            }
        }

        return grp.empty();
    }
};