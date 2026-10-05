#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients A, B, C of y = Ax^2 + Bx + C: ";
    cin >> a >> b >> c;

    double x0 = -b / (2.0 * a);
    double y0 = a * (x0 * x0) + b * x0 + c;

    cout << "Vertex of the parabola coordinates: (" << x0 << "; " << y0 << ")";

    return 0;
}