#include<iostream>
using namespace std;

int main()
{
	double fee1 = 10000.;
	double sum = 0.;

		for (int i = 0; i < 14; i++)
		{
			fee1 = 106*fee1/100; // (6/100)*1000 + 1000
			
			if (i == 9)
				cout << fee1 << endl;
			else if (i > 10)
			{
				sum = sum + fee1;
			}

		}
		cout <<"Your sum that you own to the university for 11-14th year is:"<< sum << endl;
			return 0;
}