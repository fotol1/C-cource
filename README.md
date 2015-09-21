#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d = 0, x1, x2;

    scanf("%lg %lg %lg", &a, &b, &c);

    d = b * b - 4 * a * c;
    
    

    if (d < 0)
    {
        printf("NO");
        return 0;
    }

    if (a == 0 && b == 0 && c == 0)
    {
        printf("R");
        return 0;
    }

    if (d > 0)
    {
        if (a == 0)
        {
            x1 = -c / b;
            if (x1 == -0)
                printf("0");
            else
                printf("%g", x1);
            return 0;
        }
        
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        
        if (x1 > x2)
            printf("%g %g", x2, x1);
        else
            printf("%g %g", x1, x2);
    }

    if (d == 0 && b != 0)                 
    {
        x1 = 2 * a;
        x1 = -b / x1;
        printf("%g", x1);
    }
    
    if (d == 0 && b == 0 && a == 0)                              
        printf("NO");
    
    if (d == 0 && b == 0 && a != 0)                             
        printf("0");
    
    
    

    return 0;
}
