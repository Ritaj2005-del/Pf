#include<iostream>
using namespace std;

double Myfunction(int, int);
double Myfunction(int, double);
double Myfunction(double, int);
double Myfunction(double, double);

int main() {
    cout << "The sum of two integers is given: " << endl;
    cout << Myfunction(12, 15) << endl;

    cout << "The difference of two integers is: " << endl;
    cout << Myfunction(23, 7.2) << endl;

    cout << "The product of two numbers is: " << endl;
    cout << Myfunction(8.9, 6) << endl;

    cout << "The division of two numbers is: " << endl;
    cout << Myfunction(6.3, 2.1) << endl;

    system("pause");
    return 0;
}

double Myfunction(int a, int b) {
    double sum;
    sum = a + b;
    return sum;
}

double Myfunction(int a, double b) {
    double difference;
    difference = a - b;
    return difference;
}

double Myfunction(double x, int y) {
    double multiplication;
    multiplication = x * y;
    return multiplication;
}

double Myfunction(double m, double n) {
    double division;
    division = m / n;
    return division;
}
