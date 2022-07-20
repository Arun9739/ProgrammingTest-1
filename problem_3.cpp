
/* Program to accept a number from user and count the number of digits*/

#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int count = 0;

    while(n > 0){
        count++;
        n /= 10;
    }

    cout << count << endl;
}
