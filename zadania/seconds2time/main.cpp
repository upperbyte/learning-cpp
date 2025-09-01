#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    long g = t / 3600;
    short m = (t/60)%60 ;
    short s = t % 60;

    cout << g << "g" << m << "m" << s << "s" << endl;


}