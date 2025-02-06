#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ifstream ifile;
	ifile.open("student.txt", ios::in);
	ofstream ofile;
	ofile.open("GradeA.txt");
	bool status;
	status = ifile.is_open();
	cout << "If status variable has one file is opened successfully" << endl;
	if (status == 1)
	{
		cout << "File named student.txt is opened successfully" << endl;
	}
	else
	{
		cout << "Error ! File named student.txt is NOT opened successfully" << endl;
	}
	string sid, sage, sgrade;
	ifile >> sid >> sage >> sgrade; //reading from file
	cout << sid << "  " << sage << "   " << sgrade << endl;

	// now reading acutal data from file student.txt
	int count = 0;
	int id, age;
	char grade;
	while (ifile >> id >> age >> grade)   //
	{

		//ifile >> id >> age >> grade;  //reading from file
		cout << id << "    " << age << "    " << grade << endl;

		if (grade == 'A')
		{
			ofile << id << " " << age << " " << grade << endl;
			count++;
			cout << "The count of students who have A grade is given as:" << count << endl;
		}
	}
	ofile.close();
	ifile.close();
	return 0;
}