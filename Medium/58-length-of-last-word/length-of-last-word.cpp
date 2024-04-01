class Solution {
public:
    int lengthOfLastWord(string s) {
        int index = s.size() - 1;
        int count = 0;

        while (index >= 0) {
            if (s[index] != ' ') {
                count++;
            } else if (count > 0) { // Break loop if we have already counted characters of last word
                break;
            }
            index--;
        }
    
        return count;
    }
};
