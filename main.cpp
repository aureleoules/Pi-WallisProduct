#include <stdio.h>
#include <iostream>
using namespace std;
const int PRECISION = 2000000;

// Pi = 2.0*(2/1)*(2/3)*(4/3)*(4/5)*(6/5)*(6/7)*(8/7)*...

double getPI(int decimals, int precision) {
    double p, pi = 2.0;
    for(int i = 2; i <= PRECISION; i += 2) {
        pi = pi * ((p=i)/(i-1))*(p/(i+1));
    }
    printf("%.*f", decimals, pi);
}

int main() {
    int decimalsInput, precisionInput;
    printf("How many decimals do you want? ");
    cin >> decimalsInput;
    getPI(decimalsInput, precisionInput);
    
    return 0;
}
