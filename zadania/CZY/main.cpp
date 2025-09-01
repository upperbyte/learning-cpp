#include <iostream>
using namespace std;

int main()
{
    unsigned long long i, res = 1;
    cin >> i;

    if (i % 2 != 0) {
        cout << "NIE" << endl;
    }
    else{
        while (1 < 2){
            if (res > i){
                cout << "NIE" << endl;
                break;
            } else if (res == i){
                cout << "TAK" << endl;
                break;
            }   
            res = res * 2;
        }
    }
    
}


// while (i != 1)
    // {
    //     if (i % 2 == 0)
    //     {
    //         i = i / 2;
    //     }

    //     else
    //     {
    //         i = 3 * i + 3;
    //     }
    // }