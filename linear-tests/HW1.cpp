#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int grad, minute, second;
    cout << "Enter degrees, minutes, seconds: ";
    cin >> grad >> minute >> second;
    
    double angle_deg;
    double angle_rad;
    constexpr double grad_to_rad = M_PI / 180.0;
    
    angle_deg = grad + minute / 60.0 + second / 3600.0;
    angle_rad = angle_deg * grad_to_rad;
    
    cout << "Angle in degrees: " << angle_deg << "\n" << "Angle in radians: " << angle_rad;
    
    return 0;
}