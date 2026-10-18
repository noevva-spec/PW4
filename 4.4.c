#include <stdio.h>
// var 25
int main(void){
    int n;
    int a = 0;
    int i = 0;
    if (scanf("%d", &n)!= 1 || n<=0){
        printf("error, +n\n");
        return 1;
    }
    while (i < n)
    {
        printf("%d", a);
        if (i < n -1){
            printf(" ");
        }
        a += 3;
        i++;
    }
    printf("\n");
    return 0;
    
}