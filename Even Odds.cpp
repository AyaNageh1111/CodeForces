// correct logic " ?? ??? ????"but Time limit exceeded on test 8
//using namespace std;
//#include <iostream>
//int main()
//{
//	long int startodd = 1, starteven = 2, count = 1;
//	long int end=0, stop=0;
//	cin >> end >> stop;
//	while (startodd <= end)
//	{
//
//		if (count == stop)
//		{
//			cout << startodd;
//			return 0;
//		}
//		else
//		{
//			startodd = startodd + 2;
//			count++;
//		}
//	}
//	while (starteven <= end)
//	{
//
//		if (count == stop)
//		{
//			cout << starteven;
//			return 0;
//		}
//		else
//		{
//			starteven = starteven + 2;
//
//			count++;
//		}
//
//	}
//}
//	/* 11 8 ->> 4
//	 1 3 5 7 9 11 2 4 6 8 10*/

#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}