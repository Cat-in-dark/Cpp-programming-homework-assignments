#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int hours, minutes, seconds;
    cout << "Enter hours, minutes, seconds: ";
    cin >> hours >> minutes >> seconds;
    
    minutes += (int)(seconds / 30.0);
    cout << "First rounding: hours = " << hours << "; minutes = " << minutes << endl;
    hours += (int)(minutes / 60.0 + 0.5);
    cout << "Second rounding: hours = "<< hours;

    return 0;
}