#include<iostream>
using namespace std;
int output(string arr, char word);
int main(){
    int size;
    cout << "Enter how many words you want to enter: ";
    cin >> size;
    string arr[size];
    string input;
    for(int i=0; i<size; i++){
        cout << "Enter word "<<i+1<<": ";
        cin >> arr[i];
        //arr[i] = input;
    }
    char word;
    cout << "Enter the letter you want to count: ";
    cin >> word;
    string temp ;
    int result = 0 ;
    for(int idx = 0 ; idx < size  ; idx++)
    {
        temp = arr[idx];
        result = result + output(temp , word);
    }
    cout << word << " shows up "<<result  << " times in the data.";

}
int output(string arr , char word){
    int count = 0;
    int i = 0 ;
    while(arr[i] != '\0')
    {
      if(word == arr[i])
      {
         count = count + 1 ;
      }
      i = i + 1;
     }
    return count;
}