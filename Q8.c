#include <stdio.h>

int power(int a, int b){
    if(b==0) return 1;
    
    return a*power(a,b-1);
}

int main() {
    
    int p,q;
    
    printf("Enter base integer: ");
    scanf("%d",&p);
    printf("Enter power integer: ");
    scanf("%d",&q);
    
    printf("%d",power(p,q));
    
    return 0;
}
