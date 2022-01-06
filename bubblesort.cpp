#include <iostream>
using namespace std;

void getarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "enter the " << i << "th element";
        cin >> arr[i];
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
void bubblesort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    cout << "enter the no. of elements";
    int size;
    cin >> size;
    int arr[size];
    getarray(arr, size);
    printarray(arr, size);
    bubblesort(arr, size);
    printarray(arr, size);

    return 0;
}
