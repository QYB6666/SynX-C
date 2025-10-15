#include<stdio.h>
void swap(void *p1,void *p2,int size){
    char* a1= (char*)p1;
    char* a2 = (char*)p2;
    for(int i=0;i<size;i++){
        char temp=a1[i];
        a1[i]=a2[i];
        a2[i]=temp;
    }
}

//想搞一个可以传任意类型的交换函数(包括整数)
//size代表该类型数据占用的字节数,可以用sizeof()算出来
int main()
{
int a=10,b=20;
int* p1=&a;
int* p2=&b;
swap(p1,p2,sizeof(int));
printf("a=%d,b=%d\n",a,b);
}