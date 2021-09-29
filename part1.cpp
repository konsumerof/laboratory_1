#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double rad, dgr;
    int m,s,gr;
    cout << "Write amount of degrees = ";
    cin >> gr;
    cout << "Write amount of minutes = ";
    cin >> m;
    cout << "Write amount of seconds = ";
    cin >> s;
    dgr = gr + ((m*60+s)/3600.0);
    rad = (M_PI * dgr) / 180;
    cout << "Amount of radians = " << rad;
    return 0;
}

