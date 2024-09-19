#include<iostream>
using namespace std;
int main()
{
	float N;
	cin >> N;
	int A = int(N);
	if (N - A > 0)
		cout << "float " << A << " " << N - A;
	else
		cout << "int " << A;
	return 0;
}
