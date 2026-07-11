#include<stdio.h>
int ref(int *, int *);
int main(){
    int a, b;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);

    int R = ref(&a, &b);
    printf("%d%d", a, b);// this is changing
    return 0;
}
int ref(int *m, int *n){
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
    printf("%d%d\n", *m, *n);
}