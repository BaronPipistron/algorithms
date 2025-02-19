// Time: O(n)
// Space: O(n)

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;

        for (const auto c: s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;

                char top = st.top();

                if ((top == '(' && c != ')') || (top == '{' && c != '}') || 
                    (top == '[' && c != ']')) {
                        return false;
                }

                st.pop();
            }
        }

        if (!st.empty()) return false;

        return true;
    }
};