#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

#define max 10
int a[max][max];
int w;

void nhapMang(int mt[max][max], int &n);
void xuatMang(int mt[max][max], int n);
void ktlt(int mt[max][max], int n);
int dem(int mt[max][max], int n);
void KTVT(int mt[max][max], int n);

void KTVT1(int mt[max][max], int n);

int main()
{
	int mt[max][max];
	int n;

	nhapMang(mt, n);
	cout << endl;
	xuatMang(mt, n);
	cout << endl;
	KTVT(mt, n);
	cout << endl;
	KTVT1(mt, n);

	return 0;
}

void nhapMang(int mt[max][max], int &n)
{

}

void xuatMang(int mt[max][max], int n)
{

}

void ktlt(int mt[max][max], int n)
{
for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mt[i][w] == 0 && mt[w][j] == 0) {
				cout << "ma tran van lien thong";
				return;
			}
			else
				cout << "ma tran khong lien thong";
			return;
		}
	}
}

int dem(int mt[max][max], int n)
{

}

void KTVT(int mt[max][max], int n)
{

}

void KTVT1(int mt[max][max], int n)
{

}







