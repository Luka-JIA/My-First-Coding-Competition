//现在有 𝑛(1≤𝑛≤2×10^5)n(1≤n≤2×10^5) 堆石子，第i(1≤i≤n) 堆有 𝑎𝑖(1≤𝑎𝑖≤𝑛)个石子，松坂砂糖与神户盐的操作方式有所不同：

//- 假设当前状态下，第 i 堆剩下 b-i个石子未被移走。
//- 对于松坂砂糖，其可以选择恰好一堆石子，满足 𝑏𝑖>0并移走它。
//- 对于神户盐，其可以选择若干堆石子，满足对于任意一堆选择的石子，𝑏𝑖>0，并移走这些堆中的石子各一个。
//-在谁的操作进行后，石子全部被移走，谁就获胜。双方都在最优策略下，松坂砂糖能否获胜？
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
