#include <vector>

/*
    Invariant:
        - Elements [0, left) don't satisfy COND.
        - Elements (right, a.size()) satisfy COND.
        - Elements [left, right] are not yet evaluated.
        * COND: Element is not divisible by 'k'.

        Result: Elements right from interval [0, left) satisfy COND - [left, n), so the first
        element that satisfies COND is at the position 'left'.
*/

int first_not_divisible_V1(const std::vector<long long> &a, long long k)
{
    int n = a.size();

    int left = 0;
    int right = n - 1; // !

    while (left <= right) // !
    {
        int mid = left + (right - left) / 2;
        if (a[mid] % k != 0)
            right = mid - 1; // !
        else
            left = mid + 1;
    }

    return left; // !
}

int first_not_divisible_V2(const std::vector<long long> &a, long long k)
{
    int n = a.size();

    int left = 0;
    int right = n; // !

    while (left < right) // !
    {
        int mid = left + (right - left) / 2;
        if (a[mid] % k != 0)
            right = mid; // !
        else
            left = mid + 1;
    }

    return right; // !
}
