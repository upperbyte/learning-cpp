#include <iostream>
using namespace std;

int main()
{
    long n, prev, count = 0; 
    cin >> n;
    if (n != -1){
        while (n != -1){
            if (n == 0){
                prev = n;
            }
            else{
                if (n == prev){
                    ;
                }
                else{
                    prev = n;
                    count+=1;
                }
            }
            cin >> n;
        } 
        cout << count << endl;
    }
    else{
        cout << 0 << endl;
    }


}