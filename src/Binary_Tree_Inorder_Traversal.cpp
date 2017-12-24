/*递归方法*/

class Solution {
private:
	void helper(TreeNode *root, vector<int>& res)
	{
		if (root)
		{
			helper(root->left,res);
			res.push_back(root->val);
			helper(root->right, res);
		}
	}

public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> res;
		helper(root, res);
		return res;
	}
};

/*非递归方法*/

class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> res;
		stack<TreeNode*> s;
		TreeNode *cur = root;
		while (cur != NULL || !s.empty())
		{
			while (cur != NULL)
			{
				s.push(cur);
				cur = cur->left;
			}
			TreeNode *p = s.top();
			s.pop();
			res.push_back(p->val);
			cur = p->right;
		}
		return res;
	}
};