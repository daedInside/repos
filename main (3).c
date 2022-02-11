#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q[100][100], i, j;
    printf("Enter length\n");
    scanf_s("%d", &n);
    printf("Enter elements\n");
    for (i = 0; i < n; i++) for(j=0;j<n;j++) scanf_s("%d", &q[i][j]);
    printf("\n\n");
    for (i = 0; i < n; i++) {
        for(j=0;j<n;j++) {
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        for (j = 0; j<n;j++){
            printf("%d ", q[j][i]);
        }
        printf("\n");
    }
}
