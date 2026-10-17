#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
double sum=0;
double average;
printf("需要计算几个整数的平均数");
scanf("%d",&n);
int*p=malloc(n*sizeof(int));
printf("请输入%d个整数:",n);

  for(int i=0;i<n;i++){
scanf("%d",&*(p+i));
sum+=*(p+i);


}
average=sum/n;
printf("这%d个数的平均值是:%.2lf",n,average);
free(p);
return 0;
}