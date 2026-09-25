class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int x = a.size();
        int y = b.size();
        string ans = "";

        while (x > 0 || y > 0) {

            char bitA = (x > 0) ? a[x - 1] : '0';
            char bitB = (y > 0) ? b[y - 1] : '0';

            int sum = (bitA - '0') + (bitB - '0') + carry;

            if (sum == 0) {
                ans += '0';
                carry = 0;
            }
            else if (sum == 1) {
                ans += '1';
                carry = 0;
            }
            else if (sum == 2) {
                ans += '0';
                carry = 1;
            }
            else {
                ans += '1';
                carry = 1;
            }

            x--;
            y--;
        }

        if (carry == 1) {
            ans += '1';
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};