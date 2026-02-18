#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("Max: %d\n",arr[n-1]);
    printf("Min: %d\n",arr[0]);

    return 0;
}
