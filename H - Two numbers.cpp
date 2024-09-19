#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float X, Y,a;
	cin >> X >> Y;
	a = X / Y;
	cout << "floor " << X << " / " << Y << " = " << floor(a)<<endl;
	cout << "ceil " << X << " / " << Y << " = " << ceil(a) << endl;
	cout << "round " << X << " / " << Y << " = " << round(a) << endl;
	return 0;
}
