#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main() {
    
    int tablica[10][10] = {0};

    for (int i = 0; i < 10; i++) {
        tablica[i][0] = i;
        tablica[i][1] = i + i;
        tablica[i][2] = i * i;
        tablica[i][3] = i + 3;
        tablica[i][4] = i - 4;
    }

    cout << "Tablica 10x10:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            cout << setw(4) << tablica[i][j];
        }
        cout << endl;
    }

    cout << "Nacisnij dowolny klawisz, aby zamknac program.";
    getch();

    return 0;
}
