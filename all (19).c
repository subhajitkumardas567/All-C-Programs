
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // TODO: Calculate GCD of arr[i] and arr[j]
            int result=gcd(arr[i],arr[j]);
            // TODO: If GCD is 1, increment count
            if(result==1){
                count++;
            }
        }
    }

    printf("%lld\n", count);

    return 0;
}
