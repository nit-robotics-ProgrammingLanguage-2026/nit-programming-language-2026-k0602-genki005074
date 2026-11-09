#include <stdio.h>

int main(void)
{
    int n;
    long long b =0;
    scanf("%d", &n);
    /* TODO */
    if(n<0){
        printf("NG");
    }else{
        for(long long i = 1;i<=n;i++){
            if(i % 2!= 0){
                b = b +i;
            }
        }
        printf("%lld",b);
    }
    return 0;
}
