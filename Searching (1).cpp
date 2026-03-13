#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], choice, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nSelect Searching Method\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter element to search: ";
    cin >> key;

    if(choice == 1)
    {
        bool found = false;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == key)
            {
                cout << "Element found at position " << i + 1;
                found = true;
                break;
            }
        }

        if(found == false)
        {
            cout << "Element not found";
        }
    }

    else if(choice == 2)
    {
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        int low = 0;
        int high = n - 1;
        bool found = false;

        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(arr[mid] == key)
            {
                cout << "Element found at position " << mid + 1;
                found = true;
                break;
            }
            else if(arr[mid] < key)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if(found == false)
        {
            cout << "Element not found";
        }
    }

    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}
