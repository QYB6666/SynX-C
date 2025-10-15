#include <stdio.h>
int main()
{int a;
    printf("请输入一个非负整数:");
    scanf("%d",&a);
long long count=1;
for(int i = 1; i <= a; i++)
{
    count=count*i;  
}
printf("%d! =  %lld\n",a,count);
return 0;

}