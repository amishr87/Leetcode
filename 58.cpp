class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool leave = false;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                leave = true;
                length++;
            }
            else if (leave) {
                break;
            }
        }
        
        return length;
    }
};
