#include <iostream>
using namespace std;
void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertion(int arr[], int &n, int pos, int val)
{
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
}
int main()
{
    int arr[6] = {12, 43, 66, 33, 77};
    int n = 5;
    int pos = 3;
    int val = 40;
    cout << "Array before insertion: ";
    traversal(arr, n);
    cout << endl;
    cout << "Array after insertion: ";
    insertion(arr, n, pos, val);
    traversal(arr, n);
    return 0;
}