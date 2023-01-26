/*
PLANNING:
Declare a substring count variable set to 0
Declare a holder variable to hold the character at a specific index to compare with other strings
If match all, increase counter and move to next index
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string match;
        char compare;

        // Iterate through each character of the first string
        for(int i = 0; i < strs[0].length(); i++){

            // Compare character with same index of all other strings in the vector
            for(int j = 1; j < strs.size(); j++){
                if(strs[0][i] != strs[j][i]){
                    return match;
                }
            }

            match += strs[0][i];
        }

        return match;
    }
};