#include<stdio.h>
#include<conio.h>

int main()
{
    int r,c,sp;
    for(r=5; r>=1; r--)
    {
        for(c=5;c>=r;c--)
        printf("%c",c+64);
        for (sp=2; sp<=r; sp++)
        printf(" ");
        for (sp=2; sp<=r; sp++)
        printf(" ");
        for(c=r;c<=5;c++)
        printf("%c",c+64);
         
    

        printf("\n"); //new line        
    }

}