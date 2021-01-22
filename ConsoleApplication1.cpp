#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 1251>nul");
	const int ftInMile = 5280;
	const double kmInMile = 1.609344;
	int dMile, dKm, dFt, dM;
	cout << "Select distance in Mile and Fut: "<<endl;
	cout << "Fute:";
	cin >> dFt;
	cout << "Mile:";
	cin >> dMile;
	double distMile = dMile + (double)dFt / ftInMile;
	double distKm = distMile * kmInMile;
	dKm = (int)distKm;
	dM = (int)((distKm - dKm) * 1000);
	cout << " Distance in km and m:" << endl;
	cout << "Distance (in km): " << dKm << endl;
	cout << "Distance (in m):"<<dM<<endl;
	system("pause>nul");
	return 0;
}