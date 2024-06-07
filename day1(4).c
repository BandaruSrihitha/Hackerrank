#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3 idiots
int main() {
    int X1,X2,Y1,Y2;
    scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
    float M1=((float)(X1+X2)/2);
    float M2=((float)(Y1+Y2)/2);
    printf("Binoy's house is located at (%.1f,%.1f)",M1,M2);
    return 0;
}
