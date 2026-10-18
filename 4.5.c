#include <stdio.h>
//var 29
double a(double ma){
    const double coef = 1000;
    return ma / coef;
}
int main(void){
    double ma;
    double res;
    while (scanf("%lf", &ma)== 1 && ma>0)
    {
        res = a(ma);
        printf("%.2f mA = %.2f A\n", ma, res);
    }
    return 0;
}