 #include<stdio.h>
int main(){
double a,b;
char op;
printf("请输入算式");
  scanf("%lf%c%lf",&a,&op,&b);

switch(op){
  case '+':
  printf("%.2lf+%.2lf=%.2lf",a,b,a+b);
  break;
  case '-':
  printf("%.2lf-%.2lf=%.2lf",a,b,a-b);
  break;
  case '*':
  printf("%.2lf*%.2lf=%.2lf",a,b,a*b);
  break;
  case '/':
  printf("%.2lf/%.2lf=%.2lf",a,b,a/b);
  break;
default:
   printf("请输入加减乘除中的运算符");
break;


}
return 0;
}