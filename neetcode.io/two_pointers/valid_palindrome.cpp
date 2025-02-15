// Time: O(n)
// Space: O(1)

class Solution {
public:
    bool isPalindrome(string s) {
        for (auto& c: s) {
            c = std::tolower(c);
        }

        auto l = s.begin();
        auto r = --(s.end());

        while (l < r) {
            if (!std::isalpha(*l) && !std::isdigit(*l)) {
                ++l;
                continue;
            } else if (!std::isalpha(*r) && !std::isdigit(*l)) {
                --r;
                continue;
            }

            if (*l != *r) return false;

            ++l;
            --r;
        }

        return true;
    }
};