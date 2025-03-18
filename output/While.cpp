#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    int x;
    int While = 0;
    int DoWhile = 0;

    //Perulangan While

    cout << "Perulangan dengan while" << endl;
    srand(time(0));
    x = rand () % 10;
    cout << " Nilai Awal X = " << x << endl;
    while (x < 7)
        cout << "Nilai X = " << x << "Lari keliling lapangan" << endl;
        x = rand () % 10;
         


}