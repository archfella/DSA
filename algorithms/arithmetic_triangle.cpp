#include <iostream>

long long triangle_row_sum_iterative(long long k)
{
    long long row_len = 1;
    long long first_elem = 1;

    for (long long i = 1; i < k; i++)
    {
        first_elem += row_len;
        row_len += 2;
    }

    long long sum = 0;
    for (long long i = 0; i < row_len; i++)
    {
        sum += first_elem + i;
    }

    return sum;
}

/*
    Just simple math.
*/
long long triangle_row_sum_math(long long k)
{
    long long first_elem = (k - 1) * (k - 1) + 1;
    long long row_len = 2 * k - 1;
    long long last_elem = first_elem + row_len - 1;
    long long sum = (first_elem + last_elem) * row_len / 2; // NOTE: first multiply then divide (result is truncated)
    return sum;
}