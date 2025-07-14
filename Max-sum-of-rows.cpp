#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int arr[100][100];
    int maxSum = 0;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        cout << "Enter elements of row " << i + 1 << ": ";
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    cout << "The maximum sum of any row in the 2D array is: " << maxSum << endl;
    return 0;
}