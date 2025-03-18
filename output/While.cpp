#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    int n;
    int perulanganWhile = 0;
    int perulanganDoWhile = 0;

    //Perulangan While

    while (n < 7)
    {
        cout << "Nilai n = " << n << endl;
        n = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah perulangan = " << perulanganWhile << endl;
    cout << "Nilai n terakhir = " << n << endl;

    cout << "Perulangan do while" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "Nilai awal n = " << n << endl;


}