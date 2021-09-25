#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	double percent;
	double res;
	res = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> percent;
		res = (percent / num) + res;
	}
		cout << res;

}