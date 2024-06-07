#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//dept repay
int main() {
    int p,t,r;
    scanf("%d %d %d",&p,&t,&r);
    float intrest = (p*t*r)/100;
    printf("%.2f\n",intrest);
    float amount= intrest+p;
    printf("%.2f\n",amount);
    float discount = (intrest*2)/100;
    printf("%.2f\n",discount);
    float finalamount=amount-discount;
    printf("%.2f\n",finalamount);
    return 0;
}
