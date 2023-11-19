#include<iostream>
using namespace std;
main(){
    int input;
    cout << "Enter the number of boxes: ";
    cin >> input;
    int arr[input];
    int sum=0;
    int output;
    
    cout << "Enter the dimensions of the boxes (length, width, height): "<<endl;
    for(int i=0; i<(input*3); i++){
        cin >> arr[i];
    }
        for(int i=0; i<(input*3); i=i+3){
        output=arr[i]*arr[i+1]*arr[i+2];
        sum=sum+output;
        
    }
    cout << "Total volume of all boxes: "<<sum;
}