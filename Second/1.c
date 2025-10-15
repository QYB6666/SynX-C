#include<stdio.h>
int main()
{
    int a,b,c,d,e;
printf("请输入5个学生的成绩:\n");
printf("请输入第1个学生的成绩:");
scanf("%d",&a);
printf("请输入第2个学生的成绩:");
scanf("%d",&b);
printf("请输入第3个学生的成绩:");
scanf("%d",&c);
printf("请输入第4个学生的成绩:");
scanf("%d",&d);
printf("请输入第5个学生的成绩:");
scanf("%d",&e);
printf("五个学生平均数是:%d\n",(a+b+c+d+e)/5);
 return 0;
}
