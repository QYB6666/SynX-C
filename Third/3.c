#include<stdio.h>
int f(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*f(n-1);
    }
}
int main(){
printf("请输入一个非负整数:");
int n;
scanf("%d",&n);
printf("%d! = %d\n",n,f(n));

}
