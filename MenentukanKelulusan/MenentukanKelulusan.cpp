#include <iostream>
using namespace std;

int main()
{
	float nMat, nFisika, rerata;
	string status;

	cout << "masukan nilai matematika";
	cin >> nMat;
	cout << "masukan nilai fisika";
	cin >> nFisika;
	
	rerata = (nFisika + nMat) / 2;

	if (rerata >= 60) {
		status = "Lulus Jalur rerata";
	}
	else if (nMat >= 70) {
		status = "lulus jalur Matematika";
	}
	else {
		status = "Tidak Lulus";
	}
	cout << "statusnya adalah " << status << endl;

	system("pause");
}

