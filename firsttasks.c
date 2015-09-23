#include <stdio.h>
#include <math.h>
int solution( double a, double b, double c)
{
    if (a == 0)
	{
		if (!b * !c)
			return 1;

        if (b != 0 && c == 0)
            return 3;

		if (b *  c)
			return 4;
        return 2;
	}

	if (a * (!b * !c))
			return 3;

	return 6;
}

int main()
{
	double a, b, c,d;

	scanf("%lg %lg %lg", &a, &b, &c);

	switch(solution(a,b,c))
	{
		case 1:
			printf("R");
			break;
		case 2:
			printf("No");
			break;
		case 3:
			printf("0");
			break;
		case 4:
			printf("%g", -c / b);
			break;

		default:

			d =  b * b - 4 * a * c;
			if (d == 0)
				printf("%g", -b / 2 / a);
			if (d > 0)
			{
				d = sqrt(d);
				printf("%g %g", (-b + d) / (2 * a), (-b - d) / (2 * a));
			}
			if (d < 0)
				printf("No");


	}
return 0;
	}
