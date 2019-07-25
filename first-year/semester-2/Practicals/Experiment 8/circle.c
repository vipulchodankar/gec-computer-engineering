#include <stdio.h>
void cal(float *r, float *area, float *peri)
{
    *area = 3.14 * (*r) * (*r);
    *peri = 2 * 3.14 * (*r);
}

int main()
{
    float r, area, peri;
    printf("Enter radius of circle:\n");
    scanf("%f", &r);
    cal(&r, &area, &peri);
    printf("\nArea of circle: %f\nPerimeter of circle: %f\n\n", area, peri);
}
