#include <bits/stdc++.h>
using namespace std;

void secondlargest(int arr[], int arr_size)
{

    sort(arr, arr + arr_size, greater<int>());

    for (int i = 1; i < arr_size; i++)
    {
        if (arr[i] != arr[0])
        {
            printf("The second largest element is %d\n",
                   arr[i]);
            return;
        }
    }
    printf("There is no second largest element\n");
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    secondlargest(arr, n);
    return 0;
}