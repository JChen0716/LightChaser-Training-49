void swap(int *P1, int *p2);

#include<stdio.h>
int main(){
int a=10;
int b =20;
swap(&a,&b);

printf("交换后a为%d,b为%d",a,b);
}

void swap(int *p1, int *p2)
{
       int temp;
       temp=*p1;
       *p1=*p2;
       *p2=temp;
}