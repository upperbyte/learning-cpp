#include <iostream>
using namespace std;

int main (){
    short x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    if ( ((x1 == x2 ) && (y1 != y2)) || ((x1 != x2) && (y1 == y2))){
        cout << "TAK" << endl;
    }
    else {
        cout << "NIE" << endl;
    }

    
}