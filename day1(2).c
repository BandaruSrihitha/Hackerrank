#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Splitting into teams 5
int main() {

   int a,b;
    scanf("%d %d",&a,&b);
    int r1=a/b;
    int r2=a%b;
    printf("The number of students in each team is %d and left out is %d",r1,r2);
    return 0;
}