/*
 * Filip Worwa (rooyt)
 * indeks: 1150595
 * Data: 25.10.2017r.
 * Program zwraca wartości najmniejsze i największe wylosowanej tablicy
 */


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <utility>

using namespace std;

int min;
int max;
int const N=10;
int t[N];
int value;


void tworzenietablicy()
{
	srand(time(0));
	for(int i=0; i<N; ++i)
	{
		t[i]=rand()%100;
		cout << t[i] << endl;
	}
}
	
void sortowanie()
{
	bool z=true;
	
	while(z)
	{
		z=false;
		for(int k=0; k<N; ++k)
		{
			if(t[k]>t[k-1])
			{
				value=t[k];
				t[k]=t[k-1];
				t[k]=value;
				z=true;
			}

		}
	}
}


/*
void losowanietablicy()
{
	srand(time(0));
	for(int i=0; i<N; ++i)
	{
		t[i]=rand()%100;
		cout << t[i] << endl;
	}
}
*/

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
	tworzenietablicy();
	
	cout << endl;
	
	sortowanie();
	for(int g=0; g<N; ++g)
		cout << t[g] << endl;
	
	//losowanietablicy();	

	cout << endl;
	cout << "Wartosc najmniejsza: " << minvalue() << endl;
	cout << "Wartosc najwieksza: " << maxvalue() << endl;	
}
