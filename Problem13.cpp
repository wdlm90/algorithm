#include<stdio.h>
struct ListNode
{
	int data;
	ListNode *next;
};
void DeleteOneNodeInList(ListNode *head, ListNode* node)
{
	if(node->next!=NULL)
	{
		ListNode nextnode = node->next;
		node->data = nextnode->data;
		node->next = nextnode->next;
		delete nextnode;
		nextnode=NULL;
	}else
	{
		ListNode* curnode = head;
		while(curnode->next!=node)
		{
			curnode = curnode->next;
		}
		curnode->next = node->next;
		delete node;
		node = NULL;
	}
}
void main()
{

}
