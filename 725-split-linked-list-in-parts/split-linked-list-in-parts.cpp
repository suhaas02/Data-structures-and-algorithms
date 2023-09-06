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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            count++;
            temp = temp -> next;
        }
        temp = head;
        int tot = count / k;
        int rem = count % k;
        vector<ListNode*> ans(k, NULL);
        ListNode* prev = NULL;
        while(temp)
        {
            for(int i = 0; i < k; i++)
            {
                ans[i] = temp;
                for(int cnt = 1; cnt <= tot + (rem > 0 ? 1 : 0); cnt++)
                {
                    prev = temp;
                    temp = temp -> next;
                }
                prev -> next = NULL;
                rem--;
            }
        }
        return ans;
        
    }
};