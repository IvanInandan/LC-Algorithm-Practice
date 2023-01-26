/*
PLANNING:

Trivial Solutions ->
1. If number is negative, not a palindrome

Else ->
Convert integer into a string to be able to compare indexes
Find middle index, this will be the stopping point
Compare first index with last index, and second to second to last and so on until middle index is reached
If mismatch at any point, it is not a palindrome
If middle index is reached , it is a palindrome

*/

class Solution {
public:
    bool isPalindrome(int x) {
        string value = to_string(x);
        int indexAtHalf = value.length()/2;
        
        if(value[0] == '-'){
            return false;
        }

        for(int i = 0; i < indexAtHalf; i++){
            if(value[i] != value[(value.length()-1)-i]){
                return false;
            }
        }

        return true;
    }
};