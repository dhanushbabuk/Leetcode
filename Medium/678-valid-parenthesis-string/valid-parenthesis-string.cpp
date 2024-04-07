#include <string>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        int count = 0;
        int star = 0; 

        // First pass: Check if all ')' can be matched with '(' or '*'
        for (char ch : s) {
            if (ch == '(') {
                count++;
            } else if (ch == ')') {
                if (count == 0) {
                    if (star == 0) {
                        return false; // No matching '(' found, invalid string
                    }
                    star--; // Use '*' to match ')'
                } else {
                    count--; // Match '(' with ')'
                }
            } else if (ch == '*') {
                star++; // Count '*'
            }
        }

        // Second pass: Check if all '(' can be matched with ')' or '*'
        count = 0;
        star = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            char ch = s[i];
            if (ch == ')') {
                count++;
            } else if (ch == '(') {
                if (count == 0) {
                    if (star == 0) {
                        return false; // No matching ')' found, invalid string
                    }
                    star--; // Use '*' to match '('
                } else {
                    count--; // Match ')' with '('
                }
            } else if (ch == '*') {
                star++; // Count '*'
            }
        }

       
        return true;
    }
};
