#include <iostream>
using namespace std;
void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void deletion(int arr[], int &n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}
int main()
{
    int arr[] = {12, 43, 66, 33, 77};
    int n = 5;
    int pos = 3;
    int val = 40;
    cout << "Array before deletion: ";
    traversal(arr, n);
    cout << endl;
    cout << "Array after deletion: ";
    deletion(arr, n, pos);
    traversal(arr, n);
    return 0;
}