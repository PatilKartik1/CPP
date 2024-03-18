#include<stdio.h>
void modify (int *ptr1,int *ptr2){
    *ptr1=100;
    *ptr2=200;
}
int main()
{
    int x1=20,x2=30;

    modify (&x1,&x2);

    printf("Modify value x1=%d,x2=%d",x1,x2);
    return 0;
}