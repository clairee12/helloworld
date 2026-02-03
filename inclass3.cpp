#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

double findArea(double side, char) {
    char shape;
    double side;
    double area = 0;
    cout << "what shape is your object? " << endl;
    cin >> shape;

    cout << "What is your side length"
    cin >> side;

    if (shape == 's') {
        area = pow(side, 2);
    }
    else if (shape == 'c') {
        area = 3.14159*pow(side,2);
    }
    return area;

}





int main() {
    
    return 0;
}