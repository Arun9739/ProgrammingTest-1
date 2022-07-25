
/* Program on printing number's denomination */

#include <iostream>
using namespace std;

int main(){
    int m, n = 0, mul = 1000;
    cin >> m;

    while(m > 0){
        n = n * 10 + m % 10;
        m /= 10;
    }

    for(int i = 0; i < 4; i++){
        int rem = n % 10;
        cout << rem * mul << endl;
        n /= 10;
        mul /= 10;
    }

}