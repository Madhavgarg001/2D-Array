#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100][100];
    int sum = 0;
    cout << "Enter elements of the 2D array:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i]; // Summing the diagonal elements
    }
    cout << "The sum of diagonal elements in the 2D array is: " << sum << endl;
    return 0;
}