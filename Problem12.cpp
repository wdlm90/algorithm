#include<stdio.h>
#include<string.h>
using namespace std;
bool Increment(char *number)
{
	int ntakeover = 0;
	bool isflowover =false;
	int nlength = strlen(number);
	int i;
	for(i=nlength-1;i>=0;i--)
	{
		char sum  = number[i]-'0'+ntakeover;
		if(i==nlength-1)
		sum++;
		if(sum>=10)
		{
			if(i==0)
			isflowover = true;
			else
			{
				sum = sum - 10;
				ntakeover = 1;
				number[i] = sum + '0';
			}
		}
		else
		{
			number[i] = '0'+sum;
			break;
		}
	}
	return isflowover;
}
void PrintNumber(char *number)
{
	int i = 0,j;
	int nlength = strlen(number);
	while(number[i]=='0')
	i++;
	for(j=i;j<nlength;j++)
	{
		printf("%c",number[j]);
	}
	printf("\n");
}
void PrintToMaxOfDigits(int n)
{
	if (n<=0)
	return;
	char *number  = new char[n+1];
	memset(number,'0', n);
	number[n] = '\0';
	while(!Increment(number))
	{
		PrintNumber(number);
	}
	delete []number;
}
int main()
{
	PrintToMaxOfDigits(2);
}
