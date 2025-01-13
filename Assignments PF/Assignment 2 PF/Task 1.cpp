#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void menu()
{
	cout << "*Employee System*" << endl;
	cout << "Press S to add 5 more records" << endl;
	cout << "Press P to print all records on console" << endl;
	cout << "Press E to find employee having max salary" << endl;
	cout << "Press D for department wise searching" << endl;
	cout << "Press X to exit" << endl;
}
int main()
{
	int size, max = 0;
	char sel = 0, ch = 0;
	string name, dep, dep_search;
	int salary;
	cout << "Enter number of employees : ";
	cin >> size;
	ofstream ofile;
	ofile.open("employee.txt", ios::out);
	for (int i = 0; i < size; i++)
	{
		cout << "Enter name salary and department of employee " << i + 1 << ":";
		cin >> name >> salary >> dep;
		ofile << name << " " << salary << " " << dep << endl;
	}

	do {
		menu();
		{
			cout << "Enter choice : ";
			cin >> ch;
		}

		ifstream ifile;
		ifile.open("employee.txt", ios::in);
		if (ch == 'S')
		{
			for (int i = 0; i < 5; i++)
			{
				cout << "Enter name salary and department of employee" << i + 1 << ":" << endl;
				cin >> name >> salary >> dep;
				ofile << name << " " << salary << " " << dep << endl;
			}
		}
		else if (ch == 'P')
		{
			while (true)
			{
				ifile >> name >> salary >> dep;
				if (ifile.eof())break;
				{
					cout << name << " " << salary << " " << dep << endl;
				}
			}
		}
		else if (ch == 'E')
		{
			while (true)
			{
				ifile >> salary;
				if (salary > max)
				{
					max++;
					cout << name << " has max salary : " << salary << endl;
					break;
				}
			}
		}
		else if (ch == 'D')
		{
			cout << "Enter department to search : ";
			cin >> dep_search;
			while (true)
			{
				ifile >> dep;
				if (dep == dep_search)
				{
					cout << dep_search << " department employees are :  " << name << endl;
					break;
				}
			}
		}
		else if (ch == 'X')
		{
			break;
		}
		cout << "Press Y to continue or N to terminate : ";
		cin >> sel;
		if (sel == 'N' || 'n')
		{
			break;
		}
		if (sel == 'Y' || 'y')
		{
			continue;
		}
	} while (true);
	system("pause");
	return 0;

}