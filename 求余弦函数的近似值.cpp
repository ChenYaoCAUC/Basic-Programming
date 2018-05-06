#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
double funcos( double e, double x )
{
	double s=0,i=0,b,j,flag=1,d=1;
	while(fabs(d)>e){
		b=1;
		for(j=1;j<=i;j++)
			b=b*j;
		d=flag*pow(x,i)/b;
		flag=-flag;
		s=s+d;
		i=i+2;
	}
	return s;
}
