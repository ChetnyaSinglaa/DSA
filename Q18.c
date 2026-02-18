#include <stdio.h>

int main() {
    
    int n,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of positions: ");
    scanf("%d",&k);
    
    k=k%n;
    int temp[n],index=0;
    
    for(int i=n-k;i<n;i++){
        temp[index++]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        temp[index++]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
        printf("%d ",arr[i]);
    }

    return 0;
}
