#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double angle_rad;
    cout << "Enter angle in radians: ";
    cin >> angle_rad;
    
    int grad, minute, second;
    double angle_deg;
    constexpr double rad_to_grad = 180.0 / M_PI;
    
    angle_deg = angle_rad * rad_to_grad;
    grad = (int)angle_deg;
    minute = (int)((angle_deg - grad) * 60);
    second = (int)((angle_deg - (grad + minute / 60.0)) * 3600);
    
    cout << "Angle in degrees: " << angle_deg << "\n" 
        << "Angle in degrees, minutes, seconds: " << grad << ' ' << minute << ' ' << second;
    
    return 0;
}