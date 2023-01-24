#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0,temp;
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            temp=arr[i]; 
            arr[i]=arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]); 
    }
 return 0;
}