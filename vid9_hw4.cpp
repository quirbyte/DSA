#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size1, size2, k = 0;
    cout << "Enter size of first array: ";
    cin >> size1;
    cout << "Enter size of second array: ";
    cin >> size2;
    int arr1[100], arr2[100], intersect[100];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < size1; i++)
        cin >> arr1[i];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < size2; i++)
        cin >> arr2[i];

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                bool alreadyExists = false;
                for (int l = 0; l < k; l++)
                {
                    if (intersect[l] == arr1[i])
                    {
                        alreadyExists = true;
                        break;
                    }
                }
                if (!alreadyExists)
                {
                    intersect[k] = arr1[i];
                    k++;
                }
            }
        }
    }

    cout << "Array Intersection: ";
    for (int i = 0; i < k; i++)
        cout << " " << intersect[i];

    return 0;
}
