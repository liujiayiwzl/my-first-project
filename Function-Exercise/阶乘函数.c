#include<stdio.h>
int factorial(int n)
{
	int res = 1;
	for (int i = 1; i <= n; i++)
	{
		res = res * i;
	}
		return res;
}
	int main()
	{
		int num;
		printf("请输入num的值：\n");
		scanf("%d", &num);
		int sum=factorial(num);//把num的值给到函数中的n，函数中计算完返回值给sum
		printf("%d的阶乘为：%d\n", num, sum);
		return 0;
	}