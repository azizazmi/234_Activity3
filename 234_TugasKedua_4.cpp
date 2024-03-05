#include <iostream>
using namespace std;

int main ()
{
    int bilangan1, bilangan2;
    string status;
    srand (time(0));
    bilangan1 = rand() % 10;
    bilangan2 = rand() % 10;

    if (bilangan1 == bilangan2)
    {
        status = "Bilangan pertama sama dengan bilangan kedua";
    }
    else if (bilangan1 > bilangan2)
    {
        status = "Bilangan pertama lebih besar dari bilangan kedua";
    }
    else
    {
        status = "Bilangan pertama lebih kecil dari bilangan kedua";
    }

    cout << "Bilangan pertama = " << bilangan1 << endl;
    cout << "Bilangan kedua = " << bilangan2 << endl;
    cout << "Statusnya = " << status << endl;
}