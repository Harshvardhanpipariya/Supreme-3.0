#include <bits/stdc++.h>
using namespace std;

int sqrtWithPrecision(int n)
{
    int s = 0;
    int e = n;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid * mid <= n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

double myPrecisionSqrt(int n)
{
    double sqrt = sqrtWithPrecision(n); // O(log n)
    int precision = 100;
    long double step = 0.1;

    while (precision--) // PRECISION TIMES O(p)
    {
        double j = sqrt;

        while (j * j <= n) //
        {
            // STORE AND COMPUTE
            sqrt = j;
            j += step;
        }
        // AFTER THIS WHILE LOOP I GOT 1 PRECISION ANS.
        step /= 10;
    }
    return sqrt;
}

double BSPrecision(int n)
{
    double start = 0;
    double end = n;
    double ans = 0;
    while ((end - start) > 0.000000001)
    {
        double mid = (start + end) / 2;
        double sqrt = mid * mid;
        if (sqrt <= n)
        {
            ans = mid;
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    return ans;
}

int main()
{
    int n = 90;
    double ans = myPrecisionSqrt(n); // O(LOG N) + O(PRECISION)
    cout << ans << endl;
    printf("precision Sqrt: %100f \n", ans);

    return 0;
}