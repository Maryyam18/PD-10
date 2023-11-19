#include<iostream>
using namespace std;

main()
{
	string input;
	cout << "Enter a string: ";
	getline(cin, input);
	int length = 0;
	int count= 1;
	for(int i=0; input[i]!= '\0'; i++){
		length++;
		if(input[i]== ' '){
			count++;
		}
	}
	string output[count];
	int count1= count;
	string alpha= "";
	for(int j=0; j < length+1; j++){
		if(input[j]==' ' || j== length){
			output[count1-1]= alpha;
			alpha= "";
			count1--;
		}
		else{
			alpha= alpha+input[j];
		}
	}
	string result= "";
	for(int i=0; i<count; i++){
		result = result+output[i]+" ";
	}
	cout<<"Reversed string: "<<result;
}