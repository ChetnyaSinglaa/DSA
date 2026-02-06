#include <stdio.h>

int main() {
    
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[k]=arr[i];
            k++;
        }
    }
    
    for(int j=0;j<k;j++){
        printf("%d ",arr[j]);
    }

    return 0;
}
