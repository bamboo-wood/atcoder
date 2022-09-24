#include <iostream>
using namespace std;
const int N = 1e5 + 5;
int a[N] , b[N];

int main() {
    long long n , m , t;
    cin >> n >> m >> t;
    for(int i = 1 ; i <= n-1 ; i++){
        cin >> a[i];
    }
    for(int i = 1 ; i <= m ; i++){
        int x , y;
        cin >> x >> y;
        b[x] = y;
    }
    for(int i = 1 ; i <= n ; i++){
        t = t - a[i] + b[i];
        if(t <= 0){
        cout << "No";
        return 0;
        }
    }
    cout << "Yes";
    return 0;
}