/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int count = 0;

        while(!q.empty()){
            int size = q.size();
            auto node = q.front();
                q.pop();
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            int pre = node -> val;
            if(!count && pre%2 == 0) return false;
            if(count && pre%2 == 1) return false;
            for(int i = 0 ; i < size - 1 ; i++){
                auto node = q.front();
                q.pop();
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
                if(!count && (node -> val%2 == 0 || node -> val <= pre )) return false;
                else if(count && (node -> val %2 == 1 || node -> val >= pre)) return false;
                pre = node -> val;     
            }
            
            count  = !count;
        }
        return true;
    }
};