#include<iostream>
using namespace std;
int saturday(int arr[], int size);
int main(){
    int size;
    cout << "Enter the number of Saturdays: ";
    cin >> size;
    int arr[size];
    int input;
    for(int i=0; i<size; i++){
        cout << "Enter miles run for Saturday "<<i+1<< ": ";
        cin >> input;
        arr[i] = input;
    } 
    int result;
    result = saturday(arr, size);
    cout << "Total progress days: " << result;
}

int saturday(int arr[], int size){
    int output = 0;
    for(int i=0; i<size -1; i++){
        if(arr[i]<arr[i+1]){
            output++;
        }

    }
    return output;
}





