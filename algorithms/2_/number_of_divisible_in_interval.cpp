
int number_of_divisible_in_interval(int a, int b, int k)
{
    int start = a % k == 0 ? a / k : a / k + 1;
    int end = b / k;
    int num = end >= start ? end - start + 1 : 0;
    return num;
}