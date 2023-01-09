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
    void order(TreeNode* root,vector<int> & v){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        order(root->left,v);
        order(root->right,v);

    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v;
        order(root1,v1);
        order(root2,v2);
        for(int i=0;i<v1.size();i++){
            v.push_back(v1[i]);
        }
        for(int i=0;i<v2.size();i++){
            v.push_back(v2[i]);
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};