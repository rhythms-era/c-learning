#include<stdio.h>
#include<math.h>
double getdia(double r);
double getarea(double r);
double getcir(double r);
int main()
{
    float r,dia,area,cir;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    dia=getdia(r);
    cir=getcir(r);
    area=getarea(r);
    printf("Diameter: %f\n", dia);
    printf("Circumference: %f\n", cir);
    printf("Area: %f\n", area);
    return 0;
}
double getdia(double r)
{
    return 2*r;
}
double getarea(double r)
{
    return M_PI*r*r;
}
double getcir(double r)
{
    return 2*M_PI*r;
}
