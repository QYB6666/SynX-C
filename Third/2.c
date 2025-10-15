#include <stdio.h>
int main(){
    int n;
    printf("请输入打印项数:");
    scanf("%d",&n);
    printf("斐波那契数列前%d项为:\n",n);
    for(int i=0;i<n;i++){
        printf("%d ",F(i));
    }
    return 0;
}
int F(int n){
    if (n==0)
    {
      return 0;
    }
    
    if(n==1||n==2){
        return 1;
    }
    else{
        return F(n-1)+F(n-2);
    }
}

