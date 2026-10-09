#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

// Function to calculate factorial
double fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}

// Function to calculate Hermite polynomials
double hermite(int n, double x){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2*x;
    }
    return 2*x*hermite(n-1,x) - 2*(n-1)*hermite(n-2,x);
}

// Function to calculate Quantum Harmonic Oscillator wavefunctions
double psi(int n, double x){
    double norm = 1 / (sqrt(pow(2,n) * fact(n) * sqrt(M_PI)));
    return norm * hermite(n,x) * exp((-x*x)/2);
}

int main(){
    ofstream file("psi.dat");
    for (double x=-5; x<=5; x=x+0.1)
    {
        file << x << "\t"
             << psi(0,x) << "\t"
             << psi(1,x) << "\t"
             << psi(2,x) << "\t"
             << psi(3,x) << "\t" << endl;
    }
    file.close();

    cout << "Data file 'psi.dat' created successfully!" << endl;

    return 0;
}
