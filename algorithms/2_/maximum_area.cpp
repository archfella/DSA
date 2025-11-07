
#include <algorithm>

/*
    Math:
        O = 2*(a + b), s = O/2 = a+b
        a*b = a*(s-a) = a*s - a*a = as - a^2 --> a*b = a^2 - as

        - We add and subtract s^2 / 4 so we can make this:
            a^2 - as + s^2 / 4 - s^2/4 = s^2/4 - (a-s/2)^2

        - We can see that the expression above that the maximum value of a*b is when (a - s/2)^2 = 0,
            a*b = s^2/4 --> a = s/2, b = s/2 --> a = b --> a and b form a square.

        - Also, if 'a' and 'b' can not form a square because for example a < b, the closer they are to
        forming a square, bigger the area they form.
*/

long long maximum_area(long long a, long long b, long long c)
{
    if (a > b)
        std::swap(a, b);
    if (c <= b - a)
        a += c;
    else
    {
        int remainder = c - (b - a);
        a = b + remainder / 2;
        b = b + (remainder + 1) / 2;
    }

    return a * b;
}
