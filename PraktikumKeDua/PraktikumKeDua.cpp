#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int nBilA, nBilB;

    string status;

    nBilA = rand() % 11;
    nBilB = rand() % 11;

    if (nBilA == nBilB) {
        status = "Bilangannya sama";
    }
    else if (nBilA > nBilB) {
        status = "Bilangan A lebih besar dari bilangan B";
    }
    else {
        status = "Bilangan A Lebih kecil dari bilangan B";
    }
    
    cout << "Bilangan A =" << nBilA << endl;
    cout << "Bilangan B =" << nBilB << endl;
    cout << "Tampilkan Status =" << status << endl;

}

