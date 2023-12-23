#include <iostream>
using namespace std;
// In this function, it will sort the element one-by-one:
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
// Printing array after sorted:
int printingArray(int arr[], int size)
{
    cout << "Printing the array after sorted " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Value of index " << i << " is: ";
        cout << arr[i] << endl;
    }
}
int main()
{
    // Selection Sort:
    int size1;
    cout << "Enter the size of an array: ";
    cin >> size1;
    cout << "Printing the array before sorted " << endl;
    // Creating an array:
    int arr1[100];
    for (int i = 0; i < size1; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr1[i];
    }
    // Calling functions:
    selectionSort(arr1, size1);
    printingArray(arr1, size1);
}