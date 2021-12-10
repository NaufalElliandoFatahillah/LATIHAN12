#include <iostream>

using namespace std;
int main()
{
	float Bitcoin;
	
	cout << "Masukan Jumlah Bitcoin : "; cin >> Bitcoin;
	cout << endl ;
	
	if ( Bitcoin < 1 ) { cout << "Tipe ranking : Shrimp"; }
	else if ( Bitcoin >= 1 && Bitcoin < 10 ) { cout << "Tipe ranking : Crab"; }
	else if ( Bitcoin >= 10 && Bitcoin < 50 ) { cout << "Tipe ranking : Octopus"; }
	else if ( Bitcoin >= 50 && Bitcoin < 100 ) { cout << "Tipe ranking : Fish"; }
	else if ( Bitcoin >= 100 && Bitcoin < 500 ) { cout << "Tipe ranking : Dolphin"; }
	else if ( Bitcoin >= 500 && Bitcoin < 1000 ) { cout << "Tipe ranking : Shark"; }
	else if ( Bitcoin >= 1000 && Bitcoin < 5000 ) { cout << "Tipe ranking : Whale"; }
	else if ( Bitcoin >= 5000) { cout << "Tipe ranking : Humpback"; }
	
	
	return 0;
	
	}
