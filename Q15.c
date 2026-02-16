#include <stdio.h>

int main() {
    
    int m,n;
    printf("Enter the order of matrix: ");
    scanf("%d %d",&m,&n);
    
    int arr[m][n];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element at %d,%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                sum=sum+arr[i][j];
        }
    }
    
    printf("%d",sum);

    return 0;
}
