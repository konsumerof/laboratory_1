#include <iostream>

using namespace std;

int main() {
    double arr[3],sum=0;
    cout << "Write 3 numbers: ";
    cin >> arr[0] >> arr[1] >> arr[2];
    for (int i = 0; i < 3; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    cout << "Sum of positive numbers = " << sum;
    return 0;
}

