#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int arr[rows][cols];
    int sum = 0;
    cout << "Enter elements of the 2D array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    cout << "The sum of all elements in the 2D array is: " << sum << endl;
    return 0;
}