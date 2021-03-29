#include <stdio.h>
void main() 
{
    int i, n, a = 0, b = 1, c;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    printf("\n\t Your Desired Series : ");

    for (i = 1; i < n; i++) 
	{
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }

    
}

