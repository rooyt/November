/*
 * Filip Worwa (rooyt)
 * indeks: 1150595
 * Data: 25.10.2017r.
 * Program zwraca wartości najmniejsze i największe wylosowanej tablicy
 */


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int min;
int max;
int const N=10;
int t[N];



void losowanietablicy()
{
	srand(time(0));
	for(int i=0; i<N; ++i)
	{
		t[i]=rand()%100;
		cout << t[i] << endl;
	}
}
	

int maxvalue()
{
	int max=t[0];
	for(int j=1; j<N; ++j)
	{
		if(t[j]>max)
			max=t[j];
	}
	return max;
}

int minvalue()
{
	int min=t[0];
	for(int o=1; o<N; ++o)
	{
		if(t[o]<min)
			min=t[o];
	}
	return min;
}





int main()
{
	losowanietablicy();	

	cout << endl;
	cout << "Wartosc najmniejsza: " << minvalue() << endl;
	cout << "Wartosc najwieksza: " << maxvalue() << endl;	
}
