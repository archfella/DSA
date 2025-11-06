#include <vector>

/*
    Invariant:
        - Elements with values (-inf, A) are in the interval [0, l).
        - Elements with values [A, B] are in the interval [l, i).
        - Elements with values in interval [i, r] are not yet evaluated.
        - Elements with values (B, +inf) are in the interval [r, arr.size())
*/

void dutch_national_flag(std::vector<int> &arr, int A, int B)
{

    int left = 0;
    int right = arr.size();
    int i = 0;

    while (i < right)
    {
        if (arr[i] < A)
            std::swap(arr[i++], arr[left++]);
        else if (arr[i] <= B)
            i++;
        else
            std::swap(arr[i], arr[--right]);
    }
}
