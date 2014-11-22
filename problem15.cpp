#include<stdio.h>
struct ListNode
{
	int data;
	ListNode *next;
};
int listLen(ListNode *head)
{
	int k=1;
	ListNode *p=head;
	while(p->next!=NULL)
	{
		k++;
		p = p->next;
	}
	return k;
}
int LastKNode(ListNode *head,int k)
{
	if(head==NULL||k==0)
	return;
	if(k>listlen(head))
	return;
	ListNode *first = head;
	ListNode *second = head;
	while(k>1)
	{
		first = first->next;
		k--;
	}
	while(first->next!=NULL)
	{
		first=first->next;
		second = second->next;
	}
	return second->data;
}
int main()
{

}
