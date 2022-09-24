#include<iostream>
using namespace std;
 
int main() {
    int X, Y, N;
    cin >> X >> Y >> N;
    int result = -1;
    
    if (Y / 3 > X) {
        result = N * X;
    } else {
        result = X * (N % 3) + Y * (N / 3);
    }

    cout << result << endl;
}