#include<stdio.h>
#include<time.h>

int main()
{

    /*
          time.h:
                 time()获取当前时间
          形参：表示获取的当前时间是否需要在其他地方进行存储
                 一般来讲，不需要其他地方存储的：time(NULL)
           
          返回值：long long
          结果是：从1970年1月1号  0：0：0 开始过了多少秒的时间点
	*/


    long long res = time(NULL);
    printf("%lld\n", res);

    return 0;
}