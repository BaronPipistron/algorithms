// Time: O(nlogn + mlogm) 
// Space: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        return (s == t);
    }
};

// Time: O(n)
// Space: O(|alphabet|) 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::unordered_map<char, int> mpS;
        std::unordered_map<char, int> mpT;

        for (size_t i = 0; i != s.length(); ++i) {
            ++mpS[s[i]];
            ++mpT[t[i]];
        }

        return (mpS == mpT);
    }
};
