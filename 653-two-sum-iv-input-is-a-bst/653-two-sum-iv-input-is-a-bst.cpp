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
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inorderFill(root, arr);
        
        int low = 0;
        int high = arr.size()-1;
        
        while(low < high)
        {
            if(arr[low] + arr[high] == k)
                return true;
            else if(arr[low]+arr[high] < k)
                low++;
            else
                high--;
        }
        
        return false;
    }
    
    void inorderFill(TreeNode* root, vector<int>& arr)
    {
        if(root == nullptr)
            return;
        inorderFill(root->left, arr);
        arr.push_back(root->val);
        inorderFill(root->right, arr);
    }
};