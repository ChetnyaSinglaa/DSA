#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int first = arr[0], second = arr[1];
    int min_sum = arr[0] + arr[1];

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            
            int sum = arr[i] + arr[j];

            int current_distance;
            int min_distance;

            if(sum < 0)
                current_distance = -sum;
            else
                current_distance = sum;

            if(min_sum < 0)
                min_distance = -min_sum;
            else
                min_distance = min_sum;

            if(current_distance < min_distance) {
                min_sum = sum;
                first = arr[i];
                second = arr[j];
            }
        }
    }

    printf("%d %d", first, second);

    return 0;
}
