using namespace std;
#include<iostream>

int main()
{
	

	int time;		int num;		cin >> num;		cin >> time;
	string letters;		cin >> letters;
	for (int i = 0; i < time; i++)
	{		
			for (int L = 0; L < num; L++)
			{
				if (letters[L] == 'B')
				{
					if (letters[L + 1] == 'G')
					{
						letters[L] = 'G';
						letters[L + 1] = 'B';
						L = L + 1;
					}
					
				}
			}
		
	}
		for (int L = 0; L < num; L++) 
		{
			cout << letters[L];
		}
		
}
