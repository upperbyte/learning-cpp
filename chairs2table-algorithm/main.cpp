#include <iostream>
using namespace std;

int main(){
    int a, b, k, x, y;
    cin >> a >> b >> k;
    x = max(a,b);
    y = min(a,b);
    
    if (y<k){
        cout << 0 << endl;
        return 0;
    }
    int seat;
    if (y >= 2*k){
        seat = 2*(x / k) + (2*((y - 2*k)/k)) ;
    }
    else{
        seat = (x / k) + (2*((y - 2*k)/k)) ;
    }
    
    cout << seat << endl;

}