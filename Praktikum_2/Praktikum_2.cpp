

#include <iostream>
using namespace std;

int main() {
	srand(time(0));

	int nBill = (rand() % 10);
	string status;

	if (nBill % 2 == 0) {
		status = "Genap";

	}
	else {
		status = "Ganjil";
	}
	cout << "Tampilkan nBill =" << nBill << endl;
	cout << "Tampilkan Status =" << status << endl;
}

