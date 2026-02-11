#include <stdio.h>

int main() {
    
    int m,n;
    printf("Enter size of matrix: ");
    scanf("%d %d",&m,&n);
    
    int a[m][n],b[m][n];
    printf("Matrix-1\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element at %d,%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix-2\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element at %d,%d: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    int result[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                result[i][j]=a[i][j]+b[i][j];
                printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
