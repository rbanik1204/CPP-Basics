#include <iostream>

using namespace std;

int main()
{
	// int a = 25;
	// a = a - ++a % 10 * a--;

	// cout << a << endl; -131 why dont know?

	// return 0;
	// int x=3,y;
	// y=x++ + ++x;
	// cout << x << endl << y << endl;
	// int x =3,y;
	// y = ++x - x++ + ++x;
	// cout<< x << endl<< y << endl;
	int x=1,y=2,z;
	z = x++ + y++ + x + y + ++x + ++y;
	cout <<x<<endl<<y<<endl<<z;
}