#include <bits/stdc++.h>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = NULL;
        ListNode *temp, *prev = NULL;
        bool carry = 0;
        int sum;

        while (l1 != NULL || l2 != NULL)
        {
            sum = carry + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            carry = (sum >= 10) ? 1 : 0;
            sum = sum % 10;
            ListNode *temp = new ListNode(sum);

            if (ans == NULL)
            {
                ans = temp; // ans will have the memory address of the first node (head) created
                prev = ans;
            }
            else
            {
                prev->next = temp; // add the new node to the list
                prev = prev->next; //move the list to the next position
            }

            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }
        //In case that at the end the carry exists
        if (carry == 1)
            prev->next = new ListNode(carry);
        return (ans);
    }
};