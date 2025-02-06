#include<iostream>
using namespace std;
void search(int arr[], int key)
{
	bool found = false;
	for (int i = 0; i < 5; i++)
	{
		if (key == arr[i])
		{
			found = true;
		}
	}
	if (found)
	{
		cout << "Found" << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}
}
int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "enter the elemet in array :";
		cin >> arr[i];
	}
	int key;
	cout << "Enter the integer you want to search : ";
	cin >> key;
	search(arr, key);

	system("pause");
	return 0;
}
