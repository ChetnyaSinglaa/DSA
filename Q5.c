#include <stdio.h>

int main() {
    
    int p,q;
    printf("Enter number of entries in log1: ");
    scanf("%d",&p);
    
    int nums1[p];
    printf("Enter arrival times in server 1: ");
    for(int i=0;i<p;i++){
        scanf("%d",&nums1[i]);
    }
    printf("Enter number of entries in log2: ");
    scanf("%d",&q);
    
    int nums2[q];
    printf("Enter arrival times in server 2: ");
    for(int j=0;j<q;j++){
        scanf("%d",&nums2[j]);
    }
    int res[p+q];
    int i=0,j=0,end=0;

    while(i<p && j<q){
      if(nums1[i]<=nums2[j])
        res[end++]=nums1[i++];
      else
        res[end++]=nums2[j++];
    }
    while(i<p){
      res[end++]=nums1[i++];
    }
    while(j<q){
      res[end++]=nums2[j++];
    }

    for(int k=0;k<p+q;k++){
      printf("%d ",res[k]);
    }

    return 0;
}
