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
class FindElements {
    
    vector<int> v;
    public:
    FindElements(TreeNode* root) {
        
        calcu( root , 0 );
        
    }
    void calcu(TreeNode* now , int val){
        if( now == nullptr )return;
        
        now->val = val;
        v.push_back( val );
        calcu( now->left , 2*val + 1 );
        calcu( now->right , 2*val + 2 );
        
        
    }
    
    bool find(int target) {
        auto itr = std::find(v.begin(),v.end(),target);
        return (itr==v.end())? false : true; 
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */