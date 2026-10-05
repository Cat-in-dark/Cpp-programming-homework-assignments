#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, triangle_side;
    cout << "Enter radius, triangle_side: ";
    cin >> radius >> triangle_side;

    double effective_side = triangle_side - 2 * radius * sqrt(3); // Взял из интернета, долго думал, пытался через площади :/
    int n = floor(effective_side / (2 * radius)) + 1; // Примерно понял, что берётся сторона треугольника с отступом
    int N = n * (n + 1) / 2; // А далее по ней считаем, каждый раз уменьшая на 1 количество треугольников в ряду

    cout << N << " circles of a given radius r = " << radius << " can be cut from a regular triangle with side a = " << triangle_side << '.';

    return 0;
}