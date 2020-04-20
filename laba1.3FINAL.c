#include <stdio.h>
 
int main()
{
    int n, k, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);
    if (k % 2 == 0)
    {
        k++;   
    }
    for (int i = k; i <= n; i+=2)
    {
        if ((n % i == 0) && (i % 2 != 0))
        {
            sum++;
        }
    }
    printf("Sum = %d\n", sum);
    return 0;
}
