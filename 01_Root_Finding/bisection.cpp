#include<iostream>
#include<cmath>
#include<iomanip> // Included for setprecision()

using namespace std;
#define EPSILON 0.0001 // Up to four decimal places

double func(double x)
{
    return x - cos(x);
}

void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;
    while ((b - a) >= EPSILON)
    {
        c = (a + b) / 2.0;

        if (func(c) == 0.0)
            break;

        if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }

    // Set output precision to 4 decimal places
    cout << "The value of root is: " << fixed << setprecision(4) << c << endl;
}

int main()
{
    double a = 0, b = 1;
    bisection(a, b);
    return 0;
}
