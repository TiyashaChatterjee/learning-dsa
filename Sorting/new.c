#include <stdio.h>

#define MAX 10

void transpose(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void unit(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void scalar(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void triangle(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void determinant(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void add(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);
void subtract(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]);

int main() {
    int m, n, p, q, i, j;

    printf("Enter the number of rows of the 1st matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns of the 1st matrix: ");
    scanf("%d", &n);
    printf("Enter the number of rows of the 2nd matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns of the 2nd matrix: ");
    scanf("%d", &q);

    int A[MAX][MAX], B[MAX][MAX];

    printf("Enter the elements of the 1st matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter the elements of the 2nd matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

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
        printf("Enter your choice (1 to 8): ");
        scanf("%d", &menu);

        switch (menu) {
            case 1: transpose(m, n, p, q, A, B); break;
            case 2: unit(m, n, p, q, A, B); break;
            case 3: scalar(m, n, p, q, A, B); break;
            case 4: triangle(m, n, p, q, A, B); break;
            case 5: determinant(m, n, p, q, A, B); break;
            case 6: add(m, n, p, q, A, B); break;
            case 7: subtract(m, n, p, q, A, B); break;
            case 8: printf("You are Exiting.\n"); break;
            default: printf("Invalid Choice.\n"); break;
        }
    } while (menu != 8);

    return 0;
}

void transpose(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]) {
    int i, j;
    printf("Transpose of the 1st matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
    printf("Transpose of the 2nd matrix:\n");
    for (i = 0; i < q; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", B[j][i]);
        }
        printf("\n");
    }
}

void unit(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]) {
    int arr, i, j, isunit = 1;
    printf("Check which matrix (1 or 2): ");
    scanf("%d", &arr);

    if (arr == 1) {
        if (m != n) {
            printf("Matrix is not square, so not unit.\n");
            return;
        }
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if ((i == j && A[i][j] != 1) || (i != j && A[i][j] != 0)) {
                    isunit = 0;
                }
            }
        }
        printf("1st matrix is %s unit matrix.\n", isunit ? "a" : "not a");
    } else {
        if (p != q) {
            printf("Matrix is not square, so not unit.\n");
            return;
        }
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                if ((i == j && B[i][j] != 1) || (i != j && B[i][j] != 0)) {
                    isunit = 0;
                }
            }
        }
        printf("2nd matrix is %s unit matrix.\n", isunit ? "a" : "not a");
    }
}

void scalar(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]) {
    int i, j, x;
    printf("Enter scalar to multiply with 1st matrix: ");
    scanf("%d", &x);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", x * A[i][j]);
        }
        printf("\n");
    }

    printf("Enter scalar to multiply with 2nd matrix: ");
    scanf("%d", &x);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", x * B[i][j]);
        }
        printf("\n");
    }
}

void triangle(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]) {
    int i, j;
    if (m != n && p != q) {
        printf("Matrix must be square for triangle check.\n");
        return;
    }

    int isUpperA = 1, isLowerA = 1;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i > j && A[i][j] != 0) isLowerA = 0;
            if (i < j && A[i][j] != 0) isUpperA = 0;
        }
    }
    printf("1st matrix is %s triangle matrix.\n", isUpperA ? "an upper" : (isLowerA ? "a lower" : "not a triangle"));

    int isUpperB = 1, isLowerB = 1;
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            if (i > j && B[i][j] != 0) isLowerB = 0;
            if (i < j && B[i][j] != 0) isUpperB = 0;
        }
    }
    printf("2nd matrix is %s triangle matrix.\n", isUpperB ? "an upper" : (isLowerB ? "a lower" : "not a triangle"));
}

void determinant(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]) {
    int arr;
    double det = 0;
    printf("Check determinant of which matrix (1 or 2): ");
    scanf("%d", &arr);

    if (arr == 1) {
        if (m != n || (m != 2 && m != 3)) {
            printf("Only 2x2 or 3x3 square matrices supported.\n");
            return;
        }
        if (m == 2)
            det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
        else
            det = A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1])
                - A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0])
                + A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);
    } else {
        if (p != q || (p != 2 && p != 3)) {
            printf("Only 2x2 or 3x3 square matrices supported.\n");
            return;
        }
        if (p == 2)
            det = B[0][0] * B[1][1] - B[0][1] * B[1][0];
        else
            det = B[0][0]*(B[1][1]*B[2][2] - B[1][2]*B[2][1])
                - B[0][1]*(B[1][0]*B[2][2] - B[1][2]*B[2][0])
                + B[0][2]*(B[1][0]*B[2][1] - B[1][1]*B[2][0]);
    }

    printf("Determinant = %.2lf\n", det);
}

void add(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]) {
    if (m != p || n != q) {
        printf("Matrix dimensions must match for addition.\n");
        return;
    }

    int C[MAX][MAX], i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Resultant matrix after addition:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}

void subtract(int m, int n, int p, int q, int A[MAX][MAX], int B[MAX][MAX]) {
    if (m != p || n != q) {
        printf("Matrix dimensions must match for subtraction.\n");
        return;
    }

    int C[MAX][MAX], i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];

    printf("Resultant matrix after subtraction:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}
