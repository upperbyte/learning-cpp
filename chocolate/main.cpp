#include <iostream> 

using namespace std;

int main(){
    int m, n, k;
    cin >> m >> n >> k;
    
    if (( k % m == 0 && k / n <= m ) || ( k % n == 0 && k / m <= n )){
        cout << "TAK" << endl;
    }
    else {
        cout << "NIE" << endl;
    }
    
    
    return 1;
}