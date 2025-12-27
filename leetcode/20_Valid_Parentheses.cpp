class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
      unordered_map<char, char> matching_brackets = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c); 
            } else if (c == ')' || c == '}' || c == ']') {
                if (st.empty()) {
                    return false;
                }
                char top_char = st.top();
                st.pop(); 

                if (matching_brackets[c] != top_char) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};