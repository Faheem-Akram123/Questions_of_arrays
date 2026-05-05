#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number of elements : ";
    cin >> n;
    int *arr = new int[n];
    int k = 0;

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter subarray size digit : ";
    cin >> k;

    int *arr1 = new int[n - k];
    for (int i = 0; i <= n - k; i++)
    {
        int max = arr[i];
        for (int j = i; j < i + k; j++)
        {
            if (max < arr[j])
            {
                max = arr[j];
            }
        }
        arr1[i] = max;
    }

    for (int i = 0; i <= n - k; i++)
    {
        cout << arr1[i] << " " << endl;
    }
}