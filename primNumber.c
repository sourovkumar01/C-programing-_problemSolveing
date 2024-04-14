#include<stdio.h>
int main(){

int i,count=0,num;

printf("Enter your number:");
scanf("%d",&num);

for(i=2;i<num;i++){
    if(num%i==0){
        count++;
        break;

    }
}
if(count==0)
printf("prim number");
else
    printf("Not prim number:");
return 0;

}
