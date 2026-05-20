#include<stdio.h>
 
int main(){
    int T=0;//测试组数 
    int n=0;//石子堆数 
    int test=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&n); 
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&test);
            a[j]=test;
        }
        if(n==1){
            printf("yes\n");
            continue;
        }
        for(int j=0;j<n;j++){
            if(a[j]==n){
                printf("yes\n");
                break;
            }
            if(j==n-1){
                printf("no\n");
                break;
            }
        }
    }   
    return 0;
}
