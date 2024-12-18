#include <iostream>
using namespace std;

int main (){
    int n;

    cout << "Program wskazuje najczesciej wystepujacy element tablicy liczb calkowitych sposrod podanych." << endl;

    cout <<"Podaj liczbe elementow tablicy: ";
    cin >> n;

    int* tablica = new int [n];

    for (int i = 0; i < n; i++){
        cout << "Podaj liczbe:";
        cin >> tablica[i];
    }
    
    int najczestsza = tablica[0];
    int maxLicznik = 1;
    
    for (int i = 0; i < n; i++) {
        int Licznik = 1;
        
        for (int j = i + 1; j < n; j++) {
            if (tablica[i] == tablica[j]) {
                Licznik++;
            }
        }
        
        if (Licznik > maxLicznik) {
            maxLicznik = Licznik;
            najczestsza = tablica[i];
        }
    }
    
    if (maxLicznik > 1){
        cout <<"Najczęściej występujący element: " << najczestsza << endl;
    }
    else{
        cout <<"Wszystkie podane liczby wystepuja raz.\n";
    }
    

    delete[] tablica;

    return 0;
}