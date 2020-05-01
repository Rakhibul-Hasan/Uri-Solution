#include<stdio.h>
int main()
{
	int n;
	double x,y,s1,s2,a;
	while(scanf("%d",&n)!=EOF)
	{
		s1=0;s2=0;
		while(n--){ scanf("%lf%lf",&x,&y);
		s1+=(x*y);
		s2+=y;
	}
	a=s1/(s2*100.00);
	printf("%.4lf\n",a);
	}
}
