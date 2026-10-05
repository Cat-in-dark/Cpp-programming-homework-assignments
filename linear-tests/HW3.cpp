#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double k, p, s;
    cout << "Enter money capital, %, target sum: ";
    cin >> k >> p >> s;

    int mounths = ceil(log(s / k) / log(p / 100.0 + 1.0));
    
    cout << "After " << mounths / 12 << " years, " << mounths % 12 << " mounths";

    return 0;
}