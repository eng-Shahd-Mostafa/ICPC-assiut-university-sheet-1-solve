#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	int min = x, max = z;
	if (min > y)
		min = y;
	if (min > z)
		min = z;
	if (max < y)
		max = y;
	if (max < x)
		max = x;
	cout << min << " " << max << endl;
	return 0;
}
