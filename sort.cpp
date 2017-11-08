#include <iostream>
#include <ctime>
#include <cstdlib>
#include <utility>

using namespace std;

int const N = 10;
int t[N];


void tworzenietablicy()
{

	for (int i = 0; i<N; ++i)
	{
		t[i] = rand() % 100;
		cout << t[i] << endl;
	}
}

void sortowaniebabelkowe()
{

	for (int j = 0; j < N - 1; j++)
	{
		for (int k = 0; k < N - 1; k++)
		{
			if (t[k] > t[k + 1])
			{
				swap(t[k], t[k + 1]);
			}
		}

	}
}



int main()
{	
	srand(time(0));
	tworzenietablicy();

	cout << endl;

	sortowaniebabelkowe();
	
	for (int g = 0; g < N; ++g)
		cout << t[g] << endl;

	cout << endl;
	cout << "Wartosc najmniejsza: " << t[0] << endl;
	cout << "Wartość największa: " << t[N - 1] << endl;
}
