#include<iostream>
using namespace std;
int specialValue(int arr[], int size);
int main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int result;
    result = specialValue(arr, size);
    cout << "Special value: " << result;
}

int specialValue(int arr[], int size){
    int count = 0;
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] >= i)
            {
                count++;
            }
        }
        if (count == i)
        {
            return i;
        }
        count = 0;
    }
    return -1;
}

