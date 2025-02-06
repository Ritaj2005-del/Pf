#include<iostream>
using namespace std;
double arrAvg(int arr[], int n);
int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the element in array : ";
		cin >> arr[i];
	}
	int n = sizeof arr / sizeof arr[0];
	cout << "Average of Array is : ";
	cout << arrAvg(arr, n) << endl;
	system("pause");
	return 0;

}
double arrAvg(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = arr[i] + sum;
	}
	int avg = sum / n;
	return avg;
}
