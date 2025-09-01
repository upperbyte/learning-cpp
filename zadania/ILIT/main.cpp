#include <iostream>
using namespace std;

int main() {
    unsigned long n, i;
    cin >> n;

    while (n>0){
        i = n % 16;
        if (i > 9){
            break;
        }
        //cout << i << endl;
        n /= 16;

    }
    if (i >9) cout << "TAK" << endl;
    else cout << "NIE" << endl;
}