#include <iostream>
using namespace std;

int main()
{
    long n, cyfra, result = 0;
    cin >> n;

    while (n > 0){
        cyfra = n % 10;
        n /= 10;
        result = result * 10 + cyfra;

    }
    cout << result << endl;
}

