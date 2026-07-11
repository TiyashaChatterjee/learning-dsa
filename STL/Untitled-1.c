#include<stdio.h>
int main(){
    int n = 5, i, j, s;

    for(i=1; i<=5; i++)
    {
        for ( j = 5-i; j >= 1; j--)
        {
            printf(" ");
        }
        for(s=1; s<=i; s++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}