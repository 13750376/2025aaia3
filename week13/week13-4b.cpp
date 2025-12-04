// week13-4b.cpp
// SOIT107 ADVANCE 004
#include <iostream>
using namespace std;
int god(int a,int b)
{
	if(a==0) return b;
	if(b==0) return a;
	return god(b, a%b);
}
int main()
{
	cout << "Enter two integers: \n";
	int a, b;
	cin >> a >> b;
	
	cout << "The greatest common divisor of "
		 << a << " and " << b << " is "
		 << god(a,b) << "\n";
}