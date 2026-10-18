#include <stdio.h>
#define logki_st 16
int main(void){
    int c;
    while (scanf("%d",&c) == 1 && c > 0)
    {
        int k = c / logki_st;
        int r = c % logki_st;
        printf("%d st.l = %d chashek and %d st.l\n", c, k, r);
    }
    return 0;
}