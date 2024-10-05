/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int getLength(ListNode *node)
    {   
        int length = 0;
        ListNode* temp = node;
        while(temp)
        {
            length++;
            temp = temp->next;
        }

            return length;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int len1 ,len2;
        len1 = getLength(headA);
        len2 = getLength(headB);

        while(len1 > len2)
        {
            headA = headA->next;
            len1--;
        }

         while(len2 > len1)
        {
            headB = headB->next;
            len2--;
        }

        while(headB && headA)
        {
            if(headA == headB)
            return headA;

            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;
    }
};