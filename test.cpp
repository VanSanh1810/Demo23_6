#include <iostream>
using namespace std;
void chia(int a, int b);
int tinhtong(int a, int b);
float tinhnhan(int a, int b);
int TinhTru(int a, int b);
int main()
{
	int a, b;
	cin >> a >> b;
	tinhtong(a, b);
	return 0;
}
int TinhTru(int a, int b)
{
	int c = a - b;
	cout << c << endl;
	return c;
}


void chia(int a, int b){
	cout << a/b;
}


int tinhtong(int a, int b)
{
	cout << a + b;
	return a + b;
}
float tinhnhan(int a, int b)
{
	float d = a * b;
	return d;
}

