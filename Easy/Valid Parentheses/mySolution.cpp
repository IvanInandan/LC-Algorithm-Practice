/*
PLANNING:

Scenarios --
1. Immediate '(){}[]'
2. Grouping '({[]})'
3. Mixed '({})[]'
4. Non Passing '(]'

Store the character located in the first index and figure out which character I want to compare it to.
--> Not always constant, is next index in immediate, but could by (length()-1) - i in grouping
--> different case for mixed

Index comparison case:
Nested for loop - Compare a character and iterate through the rest of the array to try and find a match
When match is found, compare the indexes by subtracting and see if result is odd
What this tells us --> If odd, there are even number of characters inside of it meaning it is a valid close

==================================================================================================================

Alternate Approach:
Use a stack method -->
If an open bracket is encountered, insert into a stack
If a closed bracket is encounterd:
- If stack is empty, return false. This indicates there is no leading open parenthesis before it
- If it matches top of stack, pop and continue
- If it doesn't match top of stack, this indicates it is not in the correct position. Return false
If stack count == 0 at end, then it is valid

*/


class Solution {
public:
    bool isValid(string s) {

        // If string length is odd, then it is invalid
        if(s.length() % 2 != 0) return false;

        stack<char> compareStack;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            compareStack.push(s[i]);

            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(compareStack.empty())
                return false;

                else{
                    if(compareStack.top() == '(' && s[i] == ')')
                    compareStack.pop();

                    else if(compareStack.top() == '{' && s[i] == '}')
                    compareStack.pop();

                    else if(compareStack.top() == '[' && s[i] == ']')
                    compareStack.pop();

                    else
                    return false;
                }               
            }        

        }

        if(compareStack.empty() == true) 
        return true;

        else
        return false;
    }
};