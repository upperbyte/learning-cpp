#include <iostream>
using namespace std;

int main()
{
    long n, result = 1;
    cin >> n;

    while (result <= n) {
        cout << result << endl;
        result = result * 2; 
    }
}

