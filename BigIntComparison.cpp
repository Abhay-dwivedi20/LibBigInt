#include "BigInt.hpp"
#include <iostream>
using namespace std;

bool operator==(const BigInt &a, const BigInt &b)
{
    return a.digits == b.digits;
}
bool operator!=(const BigInt &a, const BigInt &b)
{
    return !(a == b);
}
bool operator<(const BigInt &a, const BigInt &b)
{
    int n = Length(a), m = Length(b);
    if (n != m)
        return n < m;
    while (n--)
        if (a.digits[n] != b.digits[n])
            return a.digits[n] < b.digits[n];
    return false;
}
bool operator>(const BigInt &a, const BigInt &b)
{
    return b < a;
}
bool operator>=(const BigInt &a, const BigInt &b)
{
    return !(a < b);
}
bool operator<=(const BigInt &a, const BigInt &b)
{
    return !(a > b);
}