#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int A[5]={1,2,3,4,5};
int n = 5;
cout << "Булеан:" <<endl<<  "{Пустое}";
for (int i=1; i < pow(2, n); i++) {
    int arr[8];
    int a = i;
    for (int j=0; j < 8; j++) {
        arr[j] = a % 2;
        a /= 2;
        if (a == 1) {
            arr[j + 1] = 1;
            break;
        }
    }
    cout << endl;
    cout <<"{ " ;
        for (int j=0; j < 8; j++) {
            if (arr[j] == 1)
                cout << A[j] << " ";
            }
        cout << "}";
    }
        cout << endl << "Колличество множеств: " <<  pow(2, n) << endl;
return 0;
    
}
