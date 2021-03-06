// question link: https://www.geeksforgeeks.org/searching-array-adjacent-differ-k/

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x, int k)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == x)
            return i;

        // Jump the difference between current
        // array element and x divided by k
        // We use max here to make sure that i
        // moves at-least one step ahead.
        i = i + max(1, abs(arr[i] - x) / k);
        // Note: the less the difference gets the closer we are to target
        // means at differnce of zero we found our target
    }

    cout << "number is not present!";
    return -1;
}

int main()
{
    int arr[] = {2, 4, 5, 7, 7, 6};
    int x = 6;
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Element " << x << " is present at index "
         << search(arr, n, x, k);
    return 0;
}
