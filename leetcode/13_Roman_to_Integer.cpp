class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int result = 0;
        for (int indx = 0; indx < s.length(); indx++){
            int value = romanValues[s[indx]];
            if (indx + 1 < s.length()) {
                int nextValue = romanValues[s[indx+1]];
                if (value < nextValue) {
                    result -= value;
                } else {
                    result += value;
                }
            } else {
                result += value;
            }
        }
        return result;
    }
};