#include<stdio.h>
int main()
{
	int n,i,inside=0,a,b;
	float x[100],y[100];
	
	printf("Enter limits: ");
	scanf("%d %d", &a, &b);
	
	printf("Enter the number of points you want:");
	scanf("%d",&n);
	printf("Enter %d x and y coordinates (values between 0 and 1):\n", n);
	for(i=0;i<n;i++)
	{
		printf("Point %d (x y): ", i + 1);
		scanf("%f %f", &x[i], &y[i]);
		
		if (x[i]*x[i] + y[i]*y[i] <= 1.0)
            inside++;
	}
	float Area = ((b-a)*(b*b*b))* inside / n;
    printf("Estimated Area = %f\n", Area);
	return 0;
}
