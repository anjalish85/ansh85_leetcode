/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if ( !root || !p || !q ) { return NULL; }
    TreeNode* ans = root;
    TreeNode* r = root; // for search node p
    TreeNode* k = root; // for search node q
    while ( r != p || k != q ) {
        if ( p->val < r->val ) {
            r = r->left;
        } else if ( p->val > r->val ) {
            r = r->right;
        }
        if ( q->val < k->val ) {
            k = k->left;
        } else if ( q->val > k->val ) {
            k = k->right;
        }

        if ( r == k ) {
            ans = r;
        } else {
            break;
        }
    }

    return ans;
    }
};