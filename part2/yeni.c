#include <stdio.h>

int main(){
    float w1,w2,w3;
    float p1,p2,p3;

    printf("Enter Weights: ");
    scanf("%f %f %f", &w1, &w2, &w3);

    printf("Enter Prices: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    float T = w1 + w2 + w3;
    float C = w1*p1 + w2*p2 + w3*p3;

    printf("T : %.2f\n", T);
    printf("C : %.2f\n", C);
    return 0;
}