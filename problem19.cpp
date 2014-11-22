#include<stdio.h>
struct TreeNode
{
	int data;
	TreeNode *left;
	TreeNode *right;
};
void ReverserTree(TreeNode *root)
{
	if(root==NULL)
	return;
	if(root->left==NULL&&root->right==NULL)
	return;
	TreeNod *temp;
	temp = root->left;
	root->left = root->right;
	root->left = temp;
	if(root->left!=NULL)
	ReverserTree(root->left);
	if(root->right!=NULL)
	ReverserTree(root->right);
}
