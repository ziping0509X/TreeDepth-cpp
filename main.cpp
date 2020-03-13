//剑指OFFER
//输入一棵二叉树，求该树的深度。
// 从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。

#include <iostream>

using namespace std;


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(pRoot==NULL)
            return 0;

        int nleft=TreeDepth(pRoot->left);
        int nright=TreeDepth(pRoot->right);

        if(nleft>nright)
            return nleft+1;
        else
            return nright+1;

    }
};

//调试成功