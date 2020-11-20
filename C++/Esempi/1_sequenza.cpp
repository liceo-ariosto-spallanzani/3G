/*
Acquisire una sequenza di N numeri (con N > 0 e N < 10) calcolare e visualizzare:	
	a. Quanti sono i dispari presenti nella sequenza	
	b. La somma dei negativi presenti nella sequenza
*/

#include <iostream>
using namespace std;

bool dispari(int n)
{
	if (n % 2 == 0)
		return false;
	else
		return true;
}

bool negativo(int n)
{
	if (n < 0)
		return true;
	else
		return false;
}


/*
	PER VALORE			--> viene passato solamente il mero valore
	PER RIFERIMENTO		--> viene passato l'indirizzo di memoria della variabile
*/
void acquisisciIntero(int &n, int min, int max) 
{
	do {
		cout << "Inserisci N: ";
		cin >> n;
	} while (n < min || n > max);
}

void ciclo(int n, int &cd, int &sn) 
{
	int x;
	
	for (int i=0; i<n; i++) 
	{
		cout << "Inserisci valore: ";
		cin >> x;
		
		if (negativo(x) == true)
			sn = sn + x;
		
		if (dispari(x) == true) 
			cd++;
	}
}

int main()
{
	int n, cd = 0, sn = 0;
	
	acquisisciIntero(n, 1, 9);
	
	ciclo(n, cd, sn);
	
	cout << "Somma dei negativi: " << sn << endl;
	cout << "Numero di dispari: " << cd << endl;
	
	return 0;
}

