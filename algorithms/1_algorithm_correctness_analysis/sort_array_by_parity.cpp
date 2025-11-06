#include <vector>

/*
    Invariant:
        - Elements (0, left) are even.
        - Elements (right, n) are odd.
        - Elements [left, right] are not yet evaluated.
*/
void sort_array_by_parity_V1(std::vector<int> &arr)
{
    int n = arr.size();
    int left = 0, right = n - 1;

    while (left <= right)
    {
        if (arr[left] % 2 == 1)
        {
            std::swap(arr[left], arr[right]);
            right--;
        }
        else
            left++;
    }
}

/*
    Invariant:
        - Elements (0, left) are even.
        - Elements [right, n) are odd.
        - Elements [left, right) are not yet evaluated.
*/
void sort_array_by_parity_V2(std::vector<int> &arr)
{
    int n = arr.size();
    int left = 0, right = n;

    while (left < right)
    {
        if (arr[left] % 2 == 1)
        {
            right--;
            std::swap(arr[left], arr[right]);
        }
        else
            left++;
    }
}