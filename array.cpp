#include <iostream>
using namespace std;
void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {12, 43, 66, 33, 77};
    int n = 5;
    cout << "Array: ";
    traversal(arr, n);
    return 0;
}