#include<stdio.h>
using namespace std;
struct ListNode
{
	int data;
	ListNode *next;
};
ListNode* ReverseList(ListNode *head)
{
	ListNode *p, *q, *m;
	if(head==NULL)
	return;
	p = head->next;
	q = p->next;
	p->next = NULL;
	while(q!=NULL)
	{
		m = q->next;
		q->next = p;
		p = q;
		q = m;
	}
	head->next = p;
	return head;
}
