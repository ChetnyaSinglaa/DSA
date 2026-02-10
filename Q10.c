#include <stdio.h>
#include <string.h>

int main() {
    
    char s[100];
    
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);
    
    
    int len=strlen(s);
    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }
    int left=0,right=len-1;
    
    while(left<right){
        if(s[left]!=s[right]){
            printf("NO");
            return 0;
        }
        left++;
        right--;
    }
    printf("YES");
    
    return 0;
}
