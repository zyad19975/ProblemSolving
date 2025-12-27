class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        string num_mirror = to_string(x);
        reverse(num_mirror.begin(), num_mirror.end());
        return (num == num_mirror);
    }
};