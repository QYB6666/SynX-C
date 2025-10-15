#include<stdio.h>
int main()
{
    int sum=0;
    int a;
   printf("请输入学生个数:");
   scanf("%d",&a);
   int s[101] = {};

   for(int i=1;i<=a;i++)
   {
       int score;
       printf("请输入第%d个学生的成绩:",i);
       scanf("%d",&score);
       sum+=score;
         s[score]=s[score]+1;
   }
   printf("%d个学生平均数是:%d\n",a,sum/a);
   printf("分数分布统计:\n");
   printf("分数    人数\n");
   printf("--------------\n");
   for(int j=0;j<=100;j++)
   {
       if(s[j]!=0)
       {
           printf("%d     %d\n",j,s[j]);
       }
   }
return 0;
}