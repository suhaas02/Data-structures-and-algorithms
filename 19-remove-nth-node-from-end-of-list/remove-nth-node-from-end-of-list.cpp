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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        //approach - 1
        int count = 0;
        ListNode *temp = head;
        while(temp != NULL)
        {
            count++;
            temp = temp -> next;
        }
        cout<<count<<endl;
        if(count == 0)
            return NULL;
        if(count == n){
            ListNode* y = head;
            head = head -> next;
            delete(y);
            return head;    
        }
            
        int x = count - n;
        temp = head;
        count = 0;
        ListNode* del;
        while(temp)
        {
            count++;
            if(count == x){
                del = temp -> next;
                temp -> next = temp -> next -> next;

            }
            temp = temp -> next;
        }
        delete(del);
        return head;

        //approach -2 //using 2 pointers




























    }
};