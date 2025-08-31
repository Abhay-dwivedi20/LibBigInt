#include "BigInt.hpp"
#include <cstring>
#include <iostream>
using namespace std;

// Constructors:

BigInt::BigInt(const string &s)
{
    digits = "";
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (!isdigit(s[i]))
            throw("ERROR");
        digits.push_back(s[i] - '0');
    }
}
BigInt::BigInt(unsigned long long nr)
{
    do
    {
        digits.push_back(nr % 10);
        nr /= 10;
    } while (nr);
}
BigInt::BigInt(const char *s)
{
    digits = "";
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (!isdigit(s[i]))
            throw("ERROR");
        digits.push_back(s[i] - '0');
    }
}
BigInt::BigInt(BigInt &a)
{
    digits = a.digits;
}
// Direct assignment:
BigInt &BigInt::operator=(const BigInt &a)
{
    digits = a.digits;
    return *this;
}

// Helper Functions:
bool Null(const BigInt &a)
{
    if (a.digits.size() == 1 && a.digits[0] == 0)
        return true;
    return false;
}
int Length(const BigInt &a)
{
    return a.digits.size();
}
// int BigInt::operator[](const int index) const
// {
//     if (digits.size() <= index || index < 0)
//         throw("ERROR");
//     return digits[index];
// }

int BigInt::operator[](int index) const
{
    if (index < 0 || index >= static_cast<int>(digits.size()))
        throw std::out_of_range("BigInt: index out of range");
    return digits[index];
}
