#include <iostream>
using namespace std;

main()
{
	int size;
	cout << "Enter the length of the array: ";
	cin >> size;
	string arr[size];
	cout << "Enter the elements of the array (\"left\" or \"right\"): " <<endl;
	for(int i=0; i<size; i++)
	{
        cin >> arr[i];
	}
	int result = 0;
	for(int i=0; i<size; i++)
	{
		if(arr[i] == "right")
		{
		result = result+90;
		}
		if(arr[i] == "left")
		{
			result = result-90;
		}	
	}
	if(result < 0)
	{
		result = -result;
	}
	cout << "Number of full rotations: " << (result/360);
}