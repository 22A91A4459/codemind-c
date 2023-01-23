#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int i,i1=0,l=strlen(str),val,arr[100],j,k=0;
    for (i=0; i<l; i++){
        if (str[i]==','){
            val=0;
            for (j=i1; j<i; j++){
                val=(val*10)+str[j]-48;
            }
            arr[k++]=val;
            i1=i+1;
        }
        if (i==l-1){
            val=0;
            for (j=i1; j<=i; j++){
                val=(val*10)+str[j]-48;
            }
            arr[k++]=val;
            i1=i+1;
            break;
        }
    }
    int res[100],fs=0,n=0,rs=0;
    for (i=0; i<k; i++){
        val=arr[i];
        fs=0;
        for (j=1; j<=val; j++){
            if (val%j==0){
                fs+=j;
            }
        }
        for (j=0; j<k; j++){
            if (arr[j]==fs){
                res[n++]=val;
                rs++;
                break;
            }
        }
    }
    for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(res[j]>res[j+1])
			{
				int t=res[j];
				res[j]=res[j+1];
				res[j+1]=t;
			}
		}
		
	}
    if (rs>0){
        for (i=0; i<n; i++){
            printf("%d ",res[i]);
        }
    }
    else{
        printf("-1");
    }
    return 0;
}
