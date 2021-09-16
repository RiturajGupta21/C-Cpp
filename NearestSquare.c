#include <stdio.h>
#include <math.h>
int main() {
    double n,nearst_sq;
    printf("Enter the number whose nearst square is to be find ");
    scanf("%lf",&n);
    nearst_sq=pow(round(sqrt(n)),2);
    printf("Nearset square to %.2f is %.2lf ",n,nearst_sq);
    return 0;
}
