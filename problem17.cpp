#include<stdio.h>
struct ListNode
{
	int data;
	ListNode *next;
};
/*
ListNode* Merge(ListNode *head1,ListNode *head2)
{
	if(head1==NULL)
	return head2;
	if(head2==NULL)
	return head1;
	ListNode *mergedhead=NULL;
	if(head1->data>head2->data)
	{
		mergedhead=head1;
		mergedhead->next = Merge(head1->next,head2);
	}
	else
	{
		mergedhead->data = head2->data;
		mergedhead-next = Merge(head1,head2->next);
	}
	return mergedhead;
}
*/
ListNode* Merge(ListNode *head1,ListNode *head2)
{
	if(head1==NULL)
	return head2;
	if(head2==NULL)
	return head1;
	ListNode *p = head1;
	ListNode *q =head2;
	ListNode *mergedList = NULL;
	ListNode *cur = mergedList;
	while(p!=NULL&&q!=NULL)
	{
		if(p->data<q->data)
		{
			cur = p;
			cur = cur->next;
			p = p->next;
		}
		else
		{
			cur = q;
			cur = cur->next;
			q = q->next;
		}
	}
	if(p==NULL)
	{
		while(q!=NULL)
		{
			cur = q;
			cur = cur->next;
			q = q->next;
		}
	}
	else
	{
		while(p!=NULL)
		{
			cur = p;
			cur = cur->next;
			p = p->next;
		}
	}
	return mergedList;
}
