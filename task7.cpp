#include<iostream>
using namespace std;

main()
{
	int size;
	cout << "Enter the length of the array: ";
	cin >> size;
	int arr[size];
	cout << "Enter the elements of the array: "<<endl;
	for(int i=0; i < size; i++)
	{
		cin >> arr[i];
	}
	for(int i=0; i < size; i++)
	{
		for(int j=0; j < (size-1); j++)
		{	
		if(arr[j] > arr[j+1])
			{
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}
	bool result = true;
	for(int i=0; i < (size-1); i++)
	{
		if(arr[i] != (arr[i+1]-1))
		result = false;
	}
	cout<<"Can be arranged: " << result;
}