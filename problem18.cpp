#include<stdio.h>
struct TreeNode
{
	int data;
	TreeNode *left;
	TreeNode *right;
};
bool HasSubTree(TreeNode *root1,TreeNode *root2)
{
	bool result = false;
	if(root1!=NULL&&root2!=NULL)
	{
		if(root1->data ==root2->data)
		{
			result = DoesHasTree(root1,root2);
		}
		if(!result)
	    result  = HasSubTree(root1->left,root2);
	    if(!result)
	    result = HasSubTree(root1->right,root2);
	}
	return result;
}
bool DoesHasTree(TreeNode *root1,TreeNode *root2)
{
	if(root1==NULL)
	return false;
	if(root2==NULL)
	return true;
	if(root1->data!=root2->data)
	return false;
	return 	DoesHasTree(root1->left,root2->left)&&DoesHasTree(root1->right,root2->right);
}
