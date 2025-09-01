#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned long a, b, c;

    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a){
        cout << "TAK" << endl;
    }
    else {
        cout << "NIE" << endl;
    }
    return 0;
}

