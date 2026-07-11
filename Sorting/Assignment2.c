#include<stdio.h>
#define MAX 10
void transpose(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void unit(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void scalar(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void triangle(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void determinent(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void add(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void substract(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
int main(){
	int m, n, p, q, i, j;
	printf("Enter the no. of rows of the 1st matrix: ");
	scanf("%d", &m);
	printf("Enter the no. of columns of the 1st matrix: ");
	scanf("%d", &n);
	printf("Enter the no. of rows of the 2nd matrix: ");
	scanf("%d", &p);
	printf("Enter the no. of columns of the 2nd matrix: ");
	scanf("%d", &q);
	int A[MAX][MAX], B[MAX][MAX];
	printf("Enter the elements of the first matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix\n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d", &B[i][j]);
		}
	}

	int menu;
	do {
        printf("\nMenu:\n");
        printf("1. Transpose\n");
        printf("2. Check Unit Matrix\n");
        printf("3. Scalar Multiplication\n");
        printf("4. Upper/Lower Triangle\n");
        printf("5. Determinant (2x2 or 3x3 only)\n");
        printf("6. Matrix Addition\n");
        printf("7. Matrix Subtraction\n");
        printf("8. Exit\n");
        printf("Enter your choice(1 to 8): ");
        scanf("%d", &menu);
	

	switch (menu){
		case 1:{
            transpose(m, n, p, q, A, B);
			break;
	}
	case 2: {
            unit(m,n,p, q, A,B);
			break;
    		}
    		
     case 3: {
		scalar(m,n,p, q, A,B);
		break;
	 }
	case 4: {
		triangle(m,n,p, q, A,B);
			break;
		}
		case 5: {
		    determinent(m,n,p, q, A,B);
		    break;
	}
	case 6:{
		add(m,n,p, q, A,B);
		break;
	}
	case 7:{
		substract(m,n,p,q,A,B);
		break;
	}
	case 8:{
		printf("You are Exiting");
		break;
	}
	default:
		printf("Invalid Choice");
		break;
	}
}while(menu!=8);
	return 0;
}
void transpose(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]){
    int i, j;
		    printf("The transpose of the 1st matrix is\n");
		    for(i=0;i<n;i++){
		    	for(j=0;j<m;j++){
		    		printf("%d ", A[j][i]);
		    	}
		    printf("\n");
		    }
		    printf("The transpose of the 2nd matrix is\n");
		    for(i=0;i<q;i++){
		    	for(j=0;j<p;j++){
		    		printf("%d ", B[j][i]);
		    	}	
		    	printf("\n");
}
}
void unit(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]){
    int arr, isunit = 1, i, j;
		printf("Which matrix you want\n");
		scanf("%d", &arr);
		if(arr==1){
    		if(m != n){
        		printf("Not Unit\n");
        		return;
    		}
    		for(i = 0; i < m; i++){
        		for(j = 0; j < n; j++){
        	    	if (i == j && A[i][j] != 1){ 
						isunit = 0;}
					else if (i != j && A[i][j] != 0){ 
						isunit = 0;}
        	    	}
        	    	}
					if(isunit){
						printf("The 1st matrix is Unit\n");
					} else {
						printf("The 1st matrix is NOT Unit\n");
					}
        		}else{
					if(p != q){
						printf("Not Unit\n");
						return;
					}
					for(i = 0; i < p; i++){
						for(j = 0; j < q; j++){
							if (i == j && B[i][j] != 1){ 
								isunit = 0;}
							else if (i != j && B[i][j] != 0){ 
								isunit = 0;}
							}
							}
							if(isunit){
								printf("The 2nd matrix is Unit\n");
							} else {
								printf("The 2nd matrix is NOT Unit\n");
							}
				}
}
void scalar(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]){
    int x, i, j;
		printf("Enter any u want to multiply with the 1st matrix: ");
		scanf("%d", &x);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%d ", x * A[i][j]);
			}
			printf("\n");
		}
		int y;
		printf("Enter any u want to multiply with the 2nd matrix: ");
		scanf("%d", &y);
		for(i=0;i<p;i++){
			for(j=0;j<q;j++){
				printf("%d ",y * B[i][j]);
			}
			printf("\n");
		}
}
void triangle(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]){
    int isupper1 = 1, islower1 = 1, i, j;
		int isupper2 = 1, islower2 = 1; 
    	if((m!=n)&&(p!=q)){
    		printf("The matrix could not be a upper or lower triangle");
			return;    	
		}
    	for(i=0;i<m;i++){
    	    for(j=0;j<n;j++){
    	    	if(i>j && A[i][j]!=0){
    	    		islower1= 0;
					}
				if(i<j && A[i][j]!=0){
					isupper1=0;
				}
			}
		}
		if(isupper1){
			printf("The first matrix is upper triangle");
			}
		else if(islower1){
			printf("The first matrix is lower triangle matrix");
		}
		else{
			printf("The first matrix is neither lower nor upper triangle matrix");
		}

		for(i=0;i<m;i++){
    	    for(j=0;j<n;j++){
    	    	if(i>j && B[i][j]!=0){
    	    		islower2= 0;
					}
				if(i<j && B[i][j]!=0){
					isupper2=0;
				}
			}
		}
		if(isupper2){
			printf("The second matrix is upper triangle");
			}
		else if(islower2){
			printf("The second matrix is lower triangle matrix");
		}
		else{
			printf("The second matrix is neither lower nor upper triangle matrix");
		}
}
void determinent(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]){
    int arr;
			printf("Enter matrix at your choice(1 and 2): ");
			scanf("%d", &arr);
			int i,j;
    		double det = 0;
				if((m!=n)&&(p!=q)){
					printf("Not valid");
					return 1;
				}
    		if (m != 2 && p != 3) {
    		    printf("Only 2x2 or 3x3 matrices are supported.\n");
    		    return;
    		}
			if(arr==1){
    		if (m== 2) {
    		    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    		} else if (m == 3) {
    		    det = A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1])
    		        - A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0])
    		        + A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);
    		}

    		printf("Determinant = %.2lf\n", det);
			// break;
			}else{
				if (p == 2) {
					det = (B[0][0] * B[1][1]) - (B[0][1] * B[1][0]);
				} else if (p == 3) {
					det = B[0][0]*(B[1][1]*A[2][2] - B[1][2]*B[2][1])
						- B[0][1]*(B[1][0]*B[2][2] - B[1][2]*B[2][0])
						+ B[0][2]*(B[1][0]*B[2][1] - B[1][1]*B[2][0]);
				}
	
				printf("Determinant = %.2lf\n", det);
			}
}
void add(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]){
    int i, j;
    if((m==p)&&(n==q)){
        int C[m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        printf("The final Matrix will be\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ", C[i][j]);
            }
            printf("\n");
         }
    }else{
        printf("Dimension of both matrices are not matched");
    }
}
void substract(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]){
    int i, j;
    if((m==p)&&(n==q)){
        int C[m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                C[i][j]=A[i][j]-B[i][j];
            }
        }
        printf("The final Matrix will be\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ", C[i][j]);
            }
            printf("\n");
         }
    }
}
        

	
	