#include <math.h>
#include <stdio.h>

int main() {
    int base, expp,m, result,r;

    scanf("%d", &base);
    scanf("%d", &expp);
    scanf("%d", &m);
    
    result = pow(base, expp);
    r=result%m;
    printf("%d", r);
    return 0;
}