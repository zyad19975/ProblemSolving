class Solution {
public:
    int strStr(string haystack, string needle) {
       int hayLen = haystack.length();
        int needleLen = needle.length();

        // Edge case: if needle is empty, it's considered found at index 0.
        if (needleLen == 0) {
            return 0;
        }

        // Edge case: if needle is longer than haystack, it cannot be found.
        if (needleLen > hayLen) {
            return -1;
        }

        // Iterate through possible starting positions in haystack
        for (int i = 0; i <= hayLen - needleLen; ++i) {
            // Check if the substring of haystack matches needle
            if (haystack.substr(i, needleLen) == needle) {
                return i; // Return the starting index of the first match
            }
        }
        return -1;
    }
};