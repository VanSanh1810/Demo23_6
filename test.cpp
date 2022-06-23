#include <iostream>
using namespace std;


int  TinhTru(int a, int b);
int main()
{
	int a, b;
	cin >> a >> b;
	tinhtong(a, b);
	return 0;
}
int TinhTru(int a, int b)
{
	int c=a-b;
	cout<< c<< endl;
	return c;
	
}


int tinhtong(int a, int b)
{
	cout << a + b;
	return a + b;
}
