#include<stdio.h>
int main()
{
    int n;
    printf("enter the no. of elements to store in the array:");
    scanf("%d",&n);
    int a[n];
    int i;
    int sum = 0;
    printf("enter the no:\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        sum = sum + a[i];

    }
    float avg = (float)sum / n;
    printf("the avg of the ans is:%f",avg);
    return 0;
}
