
#include<stdio.h>
int main(){

    int num[]={10,20,25,5,4};
    int value,pos=0,i;
    printf("Enter your number : ");
    scanf("%d",&value);
    for(i=0;i<5;i++)
    {

        if(value==num[i])
            pos=i+1;
           break;
    }
    if(pos==-1){

        printf("number is not Found");
    }
    else
        printf("the value is found at position %d",pos);



}
