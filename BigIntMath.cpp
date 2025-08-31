#include "BigInt.hpp"
#include "BigIntMath.hpp"
#include <iostream>
using namespace std;

// Square Root Function
BigInt sqrt(BigInt &a)
{
    BigInt left(1), right(a), v(1), mid, prod;
    divide_by_2(right);
    while (left <= right)
    {
        mid += left;
        mid += right;
        divide_by_2(mid);
        prod = (mid * mid);
        if (prod <= a)
        {
            v = mid;
            ++mid;
            left = mid;
        }
        else
        {
            --mid;
            right = mid;
        }
        mid = BigInt();
    }
    return v;
}
// Catalan, Fibonacci and Factorial
BigInt NthCatalan(int n)
{
    BigInt a(1), b;
    for (int i = 2; i <= n; i++)
        a *= i;
    b = a;
    for (int i = n + 1; i <= 2 * n; i++)
        b *= i;
    a *= a;
    a *= (n + 1);
    b /= a;
    return b;
}

BigInt NthFibonacci(int n)
{
    BigInt a(1), b(1), c;
    if (!n)
        return c;
    n--;
    while (n--)
    {
        c = a + b;
        b = a;
        a = c;
    }
    return b;
}

BigInt Factorial(int n)
{
    BigInt f(1);
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}
