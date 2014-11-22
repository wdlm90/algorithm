#include<stdio.h>
void ReorderOddEven(int *a, int length, bool (*func)(int))
{
	if(a==NULL||length==0)
	return;
	int i=0,j=length-1,temp;
	while(i!=j)
	{
		while(i<j&&!func(a[i]))
		{
			i++;
		}
		while(i<j&&func(a[j]))
		{
			j--;
		}
		if(i<j)
		{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		}

	}
}
bool isEven(int data)
{
	return (data&1)==0;
}
int main()
{
	int a[5]={1,2,3,4,5};
	ReorderOddEven(a,5,isEven);
	for(int i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
