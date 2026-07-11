#include<stdio.h>
int length(char b[], int a);
int reverse(int x[], int rev1[], int y);
int main(){
	char str[100], rev[100];
	int j, i=0;
	
	printf("Enter a string\n");
	scanf("%s", &str);
	
	printf("The string you have entered is \n");

	for(j=0;j<length(str, i);j++){
		printf("Character %d: %c\n", j+1, str[j]);
	}
	reverse(str,rev, i);
	return 0;
}
int length(char b[], int a){
	while(b[a]!='\0'){
		a++;
	}
	return (a);
}
int reverse(int x[], int rev1[], int y){
	int i;
	for(i=0; i<length(x,y); i++){
		rev1[i]=x[length(x, y)];
	}
	rev1[length(x, y)]='\0';
	printf("The reversed string is: %s",rev1);
	// return rev1;
}