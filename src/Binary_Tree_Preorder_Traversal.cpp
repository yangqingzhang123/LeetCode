/*递归方法*/
class Solution {
private:
	void helper(TreeNode *root, vector<int>& res)
	{
		if (root)
		{
			res.push_back(root->val);
			helper(root->left,res);
			helper(root->right,res);
		}
	}
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> res;
		helper(root, res);
		return res;
	}
};

/*非递归方法*/
class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> res;
		stack<TreeNode*> s;
		TreeNode *cur = root;
		while (cur!=NULL)
		{
			res.push_back(cur->val);
			if (cur->right != NULL)
			{
				s.push(cur->right);
			}
			cur = cur->left;
			if (cur == NULL && !s.empty())
			{
				cur = s.top();
				s.pop();
			}
		}
		return res;
	}
};