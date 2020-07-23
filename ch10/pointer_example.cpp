#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x = 5;

	int *p = &x;
	cout << "x = " << x << endl;

	*p = 6;
	cout << "x = " << x << endl;
	return 0;
}
