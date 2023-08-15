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
    ListNode* partition(ListNode* head, int x) {
        // ListNode *low = head;
        // ListNode *temp = head;
        // ListNode *dummyL = new ListNode();
        // ListNode *dummyH = new ListNode();
        // while(temp != NULL)
        // {
        //     if(temp -> val < x)
        //     {
        //         dummyL -> next = new ListNode(temp -> val);
        //         cout<<"l"<<dummyL -> val<<" ";
        //         dummyL = dummyL -> next;
                
        //     }
        //     else
        //     {
        //         dummyH -> next = new ListNode(temp -> val);
        //         cout<<"h"<<dummyH -> val<<" ";
        //         dummyH = dummyH -> next;
                
        //     }
        //     temp = temp -> next;
        // }
        // dummyL -> next = dummyH -> next;

        // return dummyL -> next;

        
        ListNode* newL = new ListNode(-1);
        ListNode* newH = new ListNode(-1);
        ListNode* l = newL;
        ListNode* h = newH;
        while(head)
        {
            if(head -> val < x)
            {
                l -> next = head;
                head = head -> next;
                l = l -> next;
            }
            else
            {
                h -> next = head;
                head = head -> next;
                h = h -> next;
            }
        }
        l -> next = newH -> next;
        h -> next = NULL;
        return newL -> next;
        
    }
};