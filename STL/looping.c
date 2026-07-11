//x+x^2/2!+x^3/3!
#include<stdio.h>
#include<math.h>
float factorial(int);
float seri(int, int);
int main()
{
	int x, n;
	float op;
	printf("Enter the number: ");
	scanf("%d", &x);//5
	printf("Enter the no. of terms: ");
	scanf("%d", &n);//2
//functions are here...	
	factorial(n);//2
	op = seri(x,n);//5,2
	printf("%f", op);
	return 0;//5,2
}

float factorial(int t){//2
	int i = 1;
	int f=1;
	float b;
	for(i = 1; i<=t; i++){
		f = f * i;//2
	}
	return f;//2
}

float seri(int a,int c){//5,3
	int i;
	float res=0.00;
	for(i = 1; i<=(2*c+1); i=i+2){
		res += pow(a,i)/factorial(i);//pow(5,1)/facto(1)+pow(5,2)/facto(2)
	}
	return res;
}