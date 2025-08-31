#include "BigInt.hpp"
#include <string>
#include <cctype>
#include <stdexcept>
#include <iostream>

using namespace std;

istream &operator>>(istream &in, BigInt &a)
{
    string s;
    in >> s;
    a.digits.clear(); // clear old value

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (!isdigit(s[i]))
            throw invalid_argument("INVALID NUMBER");
        a.digits.push_back(s[i] - '0');
    }
    return in;
}

ostream &operator<<(ostream &out, const BigInt &a)
{
    for (int i = a.digits.size() - 1; i >= 0; i--)
        out << (int)a.digits[i];
    return out;
}