#include <stdio.h>

int main() {
    
    int m,n;
    printf("Enter the order of matrix: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int r=0;r<m;r++){
        for(int s=0;s<n;s++){
            printf("Enter element at %d,%d: ",r,s);
            scanf("%d",&arr[r][s]);
        }
    }
    int top=0,bottom=m-1;
    int left=0,right=n-1;
    int result[m*n],index=0;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++)
        result[index++]=arr[top][i];
        top++;
        
        for(int j=top;j<=bottom;j++)
        result[index++]=arr[j][right];
        right--;
        
        if(top<=bottom){
            for(int i=right;i>=left;i--)
            result[index++]=arr[bottom][i];
            bottom--;
            
        if(left<=right){
            for(int j=bottom;j>=top;j--)
            result[index++]=arr[j][left];
            left++;
        }
        }
    }
    
    for(int r=0;r<index;r++){
        printf("%d ",result[r]);
    }

    return 0;
}
