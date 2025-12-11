//题目：给定两个长方形，判断谁的面积更大


#include <stdio.h>
double getarea(double len,double width)
{	
	double area = len * width;
	return area;
}

int main()
{ 
	double lenA, lenB, widthA, widthB;
	double areaA, areaB;
	printf("请输入A的长和宽：\n");
	scanf("%lf %lf", &lenA, &widthA);
	printf("请输入B的长和宽：\n");
	scanf("%lf %lf", &lenB, &widthB);
	areaA = getarea(lenA, widthA);
	areaB = getarea(lenB, widthB);

	if (areaA > areaB)
	{
		printf("A的面积大\n");
	}
	else if (areaA < areaB)
	{
		printf("B的面积大\n");
	}
	else
	{
		printf("A和B面积一样大");
	}
	return 0;
}
