#include<stdio.h>
           //形参
void number(int n)
{
	//函数体
	for(int i=0;i<n;i++)
	{
		printf("wzl\n");
	}
}
int main()
{         //实参
	    number(2);
  printf("------\n");
		number(3);
	return 0;
}