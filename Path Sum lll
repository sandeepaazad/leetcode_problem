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
    int count=0,k;
    unordered_map<long,int>map;
public:
    void preorder(TreeNode* node,long curr_sum){
        if(node==NULL)
            return;
        curr_sum+=node->val;
        if(curr_sum==k)
            count++;
        count+=map[curr_sum-k];
        map[curr_sum]++;
        preorder(node->left,curr_sum);
        preorder(node->right,curr_sum);
        map[curr_sum]--;
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        k=targetSum;
        preorder(root,0);
        return count;
    }
};
