#include<stdio.h>
int main()
{
    char A;
    double B,C,D;
    scanf("%s %lf %lf",&A,&B,&C);
    D=B+(C*0.15);
    printf("TOTAL = R$ %.2lf\n",D);
    return 0;
}
