#include<iostream>
using namespace std;
int main()
{
	int N,years,months,days;
	cin >> N;
	years = N / 365;
	months = (N - years * 365) / 30;
	days = N - years * 365 - months * 30;
	cout << years << " years" << endl;
	cout << months << " months" << endl;
	cout << days << " days" << endl;
	return 0;
}
