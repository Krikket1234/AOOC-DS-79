#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int choice;
    bool arrayCreated = false;

    while (true) {
        cout << "\n=== Array Menu ===" << endl;
        cout << "1) Create array of 5 elements" << endl;
        cout << "2) Display elements" << endl;
        cout << "3) Max value in array" << endl;
        cout << "4) Smallest value in array" << endl;
        cout << "5) Addition of all elements" << endl;
        cout << "6) Update array element" << endl;
        cout << "7) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter 5 array elements:" << endl;
                for (int i = 0; i < 5; i++) {
                    cout << "Element " << i + 1 << ": ";
                    cin >> arr[i];
                }
                arrayCreated = true;
                cout << "Array created successfully!" << endl;
                break;

            case 2:
                if (!arrayCreated) {
                    cout << "Create array first!" << endl;
                    break;
                }
                cout << "Array elements: ";
                for (int i = 0; i < 5; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 3:
                if (!arrayCreated) {
                    cout << "Create array first!" << endl;
                    break;
                }
                {
                    int max = arr[0];
                    for (int i = 1; i < 5; i++) {
                        if (arr[i] > max) max = arr[i];
                    }
                    cout << "Maximum value: " << max << endl;
                }
                break;

            case 4:
                if (!arrayCreated) {
                    cout << "Create array first!" << endl;
                    break;
                }
                {
                    int min = arr[0];
                    for (int i = 1; i < 5; i++) {
                        if (arr[i] < min) min = arr[i];
                    }
                    cout << "Minimum value: " << min << endl;
                }
                break;

            case 5:
                if (!arrayCreated) {
                    cout << "Create array first!" << endl;
                    break;
                }
                {
                    int sum = 0;
                    for (int i = 0; i < 5; i++) {
                        sum += arr[i];
                    }
                    cout << "Sum of all elements: " << sum << endl;
                }
                break;

            case 6:
                if (!arrayCreated) {
                    cout << "Create array first!" << endl;
                    break;
                }
                {
                    int index, value;
                    cout << "Enter index (0-4): ";
                    cin >> index;
                    if (index >= 0 && index < 5) {
                        cout << "Enter new value: ";
                        cin >> value;
                        arr[index] = value;
                        cout << "Element updated!" << endl;
                    } else {
                        cout << "Invalid index!" << endl;
                    }
                }
                break;

            case 7:
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
}