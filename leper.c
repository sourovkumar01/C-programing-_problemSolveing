#include <stdio.h> //

int main()
{

    int Year ;
    printf("Enter the yeair",Year);
    scanf("%d",&Year);
    if(Year%400==0){
        printf(" leper this year",Year);
    }
    else if (Year%100==0){
        printf(" not lper",Year);

    }else if(Year%4==0)
    {
        printf(" leper this year",Year);
    }
    else{
        printf(" not leper",Year);
    }


    return 0;
}
