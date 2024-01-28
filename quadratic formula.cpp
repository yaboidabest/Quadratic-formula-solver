#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    cout << "Enter (a) as in the formula ax^2+bx+c\n";
    cin >> a;
    cout << "Now enter (b)\n";
    cin >> b;
    cout << "Now enter (c)\n";
    cin >> c;
    if(a == 0) {
        cout << "Error: (a) cannot be zero because that is not a quadratic formula";
    }
    if(a>0) {
        cout << "This equation is concave up/ goes up to infinity,\n";
    }
    else {
        cout << "This equation is concave down/ goes down into negitive infinity\n";
    }
cout << "The formula you have put in is y = " << a << "x^2 + " << b << "x + " << c << ",\n";
    double vertex = -b/(2*a);
    double very = a*pow(vertex,2)+(b*vertex)+c;
    cout << "The vertex is at (" << vertex << ", " << very << "),\n";
    if(very==0) {
        cout << "There is only one x intercept, it is at x value " << vertex << "\n";
        return 0;
    }
    if(very > 0 && a > -1) {
        cout << "There are no zeros in this formula.\n";
        return 0;
    }
    double zero1 = ((-1*b)+sqrt((b*b)-(4*a*c)))/(2*a);
    double zero2 = ((-1*b)-sqrt((b*b)-(4*a*c)))/(2*a);
    cout << "The zero's are at (" << zero1 << "," << zero2 << ")\n";
    return 0;
}