class Solution {
public:
    bool isPalindrome(string s) {
        string v;

        for (char c : s) {
            if (isalnum(c))
                v += tolower(c);
        }

        string rev = v;

        int f = 0;
        int l = rev.size() - 1;

        while (f < l) {
            swap(rev[f++], rev[l--]);
        }

        return v == rev;
    }
};