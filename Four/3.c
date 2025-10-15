  #include <stdio.h>
   
   int main() {
       int arr[3] = {10, 20, 30};
       int *ptr = arr;
       
       printf("%d\n", *ptr);      // 输出: arr[0]对应的值
       printf("%d\n", *(ptr+1));  // 输出: arr[1]对应的值
       printf("%d\n", *ptr+1);    // 输出: arr[0]对应的值加1
       
       ptr++;
       printf("%d\n", *ptr);      // 输出: arr[1]对应的值
       
       return 0;
   }
