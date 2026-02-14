#include <stdio.h>

int main() {
    
    int n;
    
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element at %d,%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int value1=0,value2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && arr[i][j]==1)
            value1=1;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i][j]==0)
            value2=1;
        }
    }
    
    if(value1 && value2==1)
    printf("Identity Matrix");
    else
    printf("Not an Identity Matrix");

    return 0;
}
