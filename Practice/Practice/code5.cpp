#include<iostream>
using namespace std;
int arrsum(int arr[], int n);
int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the element in array : ";
		cin >> arr[i];
	}
	int n = sizeof arr / sizeof arr[0];
	cout << "Sum of Array is : ";
	cout << arrsum(arr, n) << endl;
	system("pause");
	return 0;

}
int arrsum(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = arr[i] + sum;
	}
	return sum;
}
