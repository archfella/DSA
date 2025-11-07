#include <string>

int num_of_substrings_that_begin_with_one_BRUTE_FORCE(const std::string &s) // O(n^2)
{
    int n = s.size();
    int num_substrings = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            for (int j = i + 1; j < n; j++)
                if (s[j] == '1')
                    num_substrings++;
    }

    return num_substrings;
}

/*
    Math:
        - Number of ways we can choose 2 positions out of 'n' positions: n*(n-1) / 2
        - Number of ways we can choose 3 positions out of 'n' positions n*(n-1)*(n-2) / (2*3)
*/

int num_of_substrings_that_begin_with_one_MATH(const std::string &s) // O(n)
{
    int n = s.size();
    int num_ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            num_ones++;
    }

    int num_substrings = num_ones * (num_ones - 1) / 2;

    return num_substrings;
}