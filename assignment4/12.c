#include<stdio.h>

int main() {
    int m, n, i, j, a[10][10], b[10][10];

    printf("\nEnter the size of array mxn: ");
    scanf("%d%d", &m, &n);

    //TAKE INPUR
    for(i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nELEMENTS OF ARRAY B:\n"); 
    
    //COPY ELEMENT AND PRINT THEM
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = a[i][j];
            printf("%d\t", b[i][j]);
        }

        printf("\n");
    }

    return 0;
}