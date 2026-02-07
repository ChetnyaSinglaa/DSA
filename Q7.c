#include <stdio.h>

int fibo(int n);

int main() {
    
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    
    printf("%d",fibo(num));

    return 0;
}

int fibo(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibo(n-2) + fibo(n-1);
}
