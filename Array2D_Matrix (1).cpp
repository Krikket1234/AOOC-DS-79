#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2, choice;
    int a[10][10], b[10][10], result[10][10];

    cout << "Select Operation\n";
    cout << "1. Matrix Addition\n";
    cout << "2. Matrix Subtraction\n";
    cout << "3. Matrix Multiplication\n";
    cout << "4. Transpose of Matrix\n";
    cout << "5. Identity Matrix\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1 || choice == 2)
    {
        cout << "Enter rows and columns: ";
        cin >> r1 >> c1;

        cout << "Enter first matrix:\n";
        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c1; j++)
                cin >> a[i][j];

        cout << "Enter second matrix:\n";
        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c1; j++)
                cin >> b[i][j];

        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c1; j++)
                result[i][j] = (choice == 1) ? a[i][j] + b[i][j] : a[i][j] - b[i][j];

        cout << "Result:\n";
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
                cout << result[i][j] << " ";
            cout << endl;
        }
    }

    else if(choice == 3)
    {
        cout << "Enter rows and columns of first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns of second matrix: ";
        cin >> r2 >> c2;

        if(c1 != r2)
        {
            cout << "Multiplication not possible";
            return 0;
        }

        cout << "Enter first matrix:\n";
        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c1; j++)
                cin >> a[i][j];

        cout << "Enter second matrix:\n";
        for(int i = 0; i < r2; i++)
            for(int j = 0; j < c2; j++)
                cin >> b[i][j];

        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c2; j++)
            {
                result[i][j] = 0;
                for(int k = 0; k < c1; k++)
                    result[i][j] += a[i][k] * b[k][j];
            }

        cout << "Result:\n";
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
                cout << result[i][j] << " ";
            cout << endl;
        }
    }

    else if(choice == 4)
    {
        cout << "Enter rows and columns: ";
        cin >> r1 >> c1;

        cout << "Enter matrix:\n";
        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c1; j++)
                cin >> a[i][j];

        cout << "Transpose:\n";
        for(int j = 0; j < c1; j++)
        {
            for(int i = 0; i < r1; i++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    else if(choice == 5)
    {
        int n;
        cout << "Enter order of matrix: ";
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == j)
                    cout << "1 ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }

    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}
