#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a],i,j,k,l=1,v=0,c=0;
    for (i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    k=arr[0];
    for (i=1; i<a; i++){
        if (arr[i]==k){
            l++;
        }
    }
    if (l==a){
        printf("%d",0);
    }
    else{
        for (i=0; i<a; i++){
            c=0;
            for (j=i; j<a; j++){
                if (arr[i]==arr[j]){
                    c++;
                    if (c>v){
                        v=c;
                    }
                }
            }
        }
        printf("%d",v);
    }
    return 0;
}

