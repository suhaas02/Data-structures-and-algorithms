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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right)
            return head;
        //approach - 1 // taking extra space and solving the problem
        vector<int> values;
        int x = right - left + 1;
        int tl = left - 1;
        ListNode *leftPtr = head;
        while(tl--)
        {
            leftPtr = leftPtr -> next;
        }
        cout<<leftPtr -> val<<endl;
        ListNode *temp = leftPtr;
        while(temp != NULL && x--)
        {
            values.push_back(temp -> val);
            temp = temp -> next;
        }
        for(auto x : values)
            cout<<x<<" ";
        cout<<endl;
        reverse(values.begin(),values.end());
        int i = 0;
        while(i < values.size())
        {
            leftPtr -> val = values[i];
            i++;
            leftPtr = leftPtr -> next;
        }
        return head;

        //approach - 2 //without taking extraspace
        // Node* temp = head;
        // Node* l = NULL, *r = NULL;
        
        // //first i will find the left and right address
        // while(temp != NULL)
        // {

        // }
        

    }
};