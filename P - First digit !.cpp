#include<iostream>
using namespace std;
int main()
{
	int X,check;
	cin >> X;
	check = X / 1000;
	if (check % 2 == 0)
		cout << "EVEN";
	else
		cout << "ODD";
	return 0;
}
