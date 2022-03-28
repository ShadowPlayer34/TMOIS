#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int A[5] = {1,2,3,4,5};
    int B[4] = {4,5,6,7};
    int U[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int bit_A[11] = {0,0,0,0,0,0,0,0,0,0,0};
    int bit_B[11] = {0,0,0,0,0,0,0,0,0,0,0};
    int bit_notA[]={1,1,1,1,1,1,1,1,1,1,1};
    int bit_notB[]={1,1,1,1,1,1,1,1,1,1,1};
    for (int i = 0; i<11; i++) {
        for (int l = 0; l < 5; l++) {
            if (U[i] == A[l]) {
                bit_A[i] = 1;
            }
        }
    }
    
    for (int i = 0; i<11; i++) {
        for (int l = 0; l < 4; l++) {
            if (U[i] == B[l]) {
                bit_B[i] = 1;
            }
        }
    }
    
    for (int i = 0; i<11; i++) {
        for (int l = 0; l < 5; l++) {
            if (U[i] == A[l]) {
                bit_notA[i] = 0;
            }
        }
    }
    
    for (int i = 0; i<11; i++) {
        for (int l = 0; l < 4; l++) {
            if (U[i] == B[l]) {
                bit_notB[i] = 0;
            }
        }
    }
    
    for (int i = 0; i<11; i++) {
        cout << bit_A[i] << "\t";
    }
    cout << endl;
    
    for (int i = 0; i<11; i++) {
        cout << bit_B[i] << "\t";
    }
    cout << endl;
    
    cout << "объединение: \n";
    for (int i = 0; i < 11; i++) {          //обьединение
        if (bit_A[i] && bit_B[i]){
            cout << U[i] << "\t";
        }
    }
    cout << endl;
    
    cout << "пересечение: \n";
    for (int i = 0; i < 11; i++) {          //пересечение
        if (bit_A[i] || bit_B[i]){
            cout << U[i] << "\t";
        }
    }
    cout << endl;
    
    cout << "разность: \n";
    for (int i = 0; i < 11; i++) {          //разность
        if (bit_A[i] && !bit_B[i]){
            cout << U[i] << "\t";
        }
    }
    cout << endl;
    
    cout << "xor: \n";
    for (int i = 0; i < 11; i++) {          //xor
        if (bit_A[i] ^ bit_B[i]){
            cout << U[i] << "\t";
        }
    }
    cout << endl;
    
    cout << "дополнение: \n";
    for (int i = 0; i < 11; i++) {          //дополнение
        if (bit_notA[i] && bit_notB[i]){
            cout << U[i] << "\t";
        }
    }
    cout << endl;
    return 0;
}
