#include <stdio.h>
#include <float.h>
// var 19
int main(void){
    int n;
    int i = 1;
    double a = 1.0;
    if (scanf("%d", &n) !=1 || n<=0){
        printf("error, +n!\n");
        return 1;
    }
    while (i <= n){
        printf("%.5g", a);
        if (i < n){
            if (a > DBL_MAX/1000.0){
                break;
            }
            a *= 1000.0;
        }
        i++;
    }
    printf("\n");
    return 0;
}