#include <stdio.h>

int main() {
    
    int m,n;
    printf("Enter the order of matrix: ");
    scanf("%d %d",&m,&n);
    
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter element at %d,%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(arr[i][j]!=arr[j][i]){
             printf("Not a Symmetric Matrix");
             return 0;
           }
        }
    }
    
    printf("Symmetric Matrix");

    return 0;
}
