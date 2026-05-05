#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number of elements : ";
    cin >> n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        int max = arr1[i];
        if (i == n -1)
        {
            for (int j = 0; j < n; j++)
            {
                if (max < arr1[j])
                {
                    max = arr1[j];
                    flag = true;
                    break;
                }
            }
        }

        for (int j = i; j < n; j++)
        {
            if (max < arr1[j])
            {
                max = arr1[j];
                flag = true;
                break;
            }
        }

        if (flag)
            arr2[i] = max;
        else
            arr2[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}