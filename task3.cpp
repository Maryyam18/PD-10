#include<iostream>
using namespace std;
bool cycleRepeating(int arr[], int size, int cycle);
int main(){
    int size;
    cout << "Enter the length of the array : ";
    cin >> size;
    int arr[size];
    int input;
    cout << "Enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++){   
        cin >> input;
        arr[i] = input;
    }
    int cycle;
    cout << "Enter the length of the cycle: ";
    cin >> cycle;
    int result = cycleRepeating(arr, size, cycle);
    cout << "Output: "<<result;
    return 0;
}

bool cycleRepeating(int arr[], int size, int cycle){
    if(cycle > size){
        return true;
    }
    for(int i=0; i<size; i++){
            if( arr[i] == arr[i+cycle]){
                return  true;
            }
            return false;
            
        }
    
    return 0;
}
