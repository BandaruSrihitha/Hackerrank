#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Area calculation
int main() {
    int s,l,b;
    float r,a;
    scanf("%d%d%d%f",&s,&l,&b,&r);
    printf("%d\n",s*s);
    printf("%d\n",l*b);
    a=3.14*r*r;
    printf("%.2f\n",a);
    return 0;
}
