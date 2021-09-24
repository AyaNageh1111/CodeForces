#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
	string name;
	int count = 0;
	cin >> name;
	int length;
	length = name.length();
	sort(name.begin(), name.end());
	for (int i = 0; i < length; i++)
	{
		if (name[i] != name[i + 1])
		{
			count++;
		}
	}
	if (count % 2 == 0)
	{
		cout << "CHAT WITH HER!";
	}
	else
	{
		cout << "IGNORE HIM!";
	}
}