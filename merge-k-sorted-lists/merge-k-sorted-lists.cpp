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
    void helper(ListNode*& root,int data)
    {
        ListNode *temp = new ListNode(data);
        // temp -> val = ;
        temp -> next = root;
        root = temp;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> temp;
        for(int i = 0; i < lists.size();i++)
        {
            while(lists[i] != NULL)
            {
                temp.push_back(lists[i] -> val);
                lists[i] = lists[i] -> next;
            }
        }
        for(auto x : temp)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        //approach -1 //using sort function
        // sort(temp.begin(),temp.end());

        //approach -2 //using max heap
        priority_queue<int> pq(temp.begin(),temp.end());

        ListNode* root = NULL;
        while(!pq.empty())
        {
            int x = pq.top();
            pq.pop();
            helper(root,x);
        }
        return root;
    }
};