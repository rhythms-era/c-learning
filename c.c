#include<stdio.h>
#include<math.h>
double getdia(double r);
double getarea(double r);
double getcir(double r);
void main()
{
    double r,dia,area,cir;
    printf("Enter radius of circle:");
    scanf("%lf",&r);
    dia=getdia(r);
    cir=getcir(r);
    area=getarea(r);
    printf("Diameter: %lf\n", dia);
    printf("Circumference: %lf\n", cir);
    printf("Area: %lf\n", area);
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
