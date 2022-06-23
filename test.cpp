#include <iostream>
using namespace std;
void chia(int a, int b);
int main()
{
	int a, b;
	cin >> a,b;
	chia(a,b);
	return 0;
}

void chia(int a, int b){
	cout << a/b;
}

