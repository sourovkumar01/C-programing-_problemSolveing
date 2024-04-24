#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter two Number ");
    scanf("%d %d",&a,&b);
   int  result = sum(a,b);
    printf("The sum is :%d",result);


}
int sum(int a ,int b){

    return a*b;
}
