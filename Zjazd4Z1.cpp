#include <iostream>
using namespace std;

int main (){
    int n;

    cout << "Program podaje najwiekszy element tablicy liczb calkowitych sposrod podanych." << endl;

    cout <<"Podaj liczbe elementow tablicy: ";
    cin >> n;

    int* tablica = new int [n];

    for (int i = 0; i < n; i++){
        cout << "Podaj liczbe:";
        cin >> tablica[i];
    }
    
    int max = tablica [0];
    for ( int i=0 ; i < n; i++){
        if (max < tablica[i] ){
            max = tablica[i];
        }
    }
    
    if (n > 0){
        cout << "Najwiekszy element z podanych to: " << max << endl;
    }
    else{
        cout <<"Brak elementow w tablicy" << endl;
    }
    
    delete [] tablica;

    return 0;
}