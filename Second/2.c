#include <stdio.h>
int main()
{
    int sum=0;
    int a;
   printf("请输入学生个数:");
   scanf("%d",&a);
   for(int i=1;i<=a;i++)
   {
       int score;
       printf("请输入第%d个学生的成绩:",i);
       scanf("%d",&score);
       sum+=score;
   }
   printf("%d个学生平均数是:%d\n",a,sum/a);
return 0;
}