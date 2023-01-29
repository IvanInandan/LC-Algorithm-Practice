/*
PLANNING:
Compare the first nodes of each linked list
If there is a carry (ie: sum%10 != 0)
    Adjust carry counter
Else
    Don't worry about carry
Take note of sum / floor value
Make dummy linked list and have it point to value
Iterate through linked list
Repeat
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
        return l2;

        else if(l2 == NULL)
        return l1;

        else{
            int carry = 0;
            int value;
            int numberOne;
            int numberTwo;
            ListNode* result = new ListNode(); // Make pointer to keep track of the head
            ListNode* dummy = result; // Set dummy pointer to head to iterate and add new nodes to linked list

            while(l1 != NULL || l2 != NULL || carry != 0){
                if(l1 == NULL)
                numberOne = 0;

                else{
                numberOne = l1->val;
                l1 = l1 -> next;
                }

                if(l2 == NULL)
                numberTwo = 0;
                
                else{
                numberTwo = l2->val;
                l2 = l2 -> next;
                }

                value = (numberOne + numberTwo + carry);
                carry = value / 10;
                value = value % 10;

                dummy->next = new ListNode(value); // Make a new node at the next position
                dummy = dummy->next; // Move pointer to new node
            }

            return result->next; // Return head of linked list
        }
    }
};