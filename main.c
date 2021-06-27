#include<stdio.h>
void main()
{
    int n;
    printf("Enter your marks : ");
    scanf("%d",&n);
    if(n<0 || n>100)
    {
        printf("Wrong Entry");
    }
    else if(n<=40)
    {
        printf("Grade F");
    }
    else if(n>40 && n<=54)
    {
        printf("Grade D");
    }
    else if(n>54 && n<=69)
    {
        printf("Grade C");
    }
    else if(n>69 && n<=84)
    {
        printf("Grade B");
    }
    else if(n>84 && n<100)
    {
        printf("Grade A");
    }
    
  
}
