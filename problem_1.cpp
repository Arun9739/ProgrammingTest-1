
/*Write a program to accept five digit number number from the user, increment each digit by one and display the answer*/

#include <iostream>
using namespace std;

int main(){
    int n, temp = 0;
    cin >> n;

    int num = n;

    bool flag2 = false, flag1 = false;

    if(n % 10 == 9)
        flag2 = true;

    if(num / 10000 == 9)
        flag1 = true;    

    while(n > 0){
        int rem = n % 10;
        if(rem != 9){
            temp = temp * 10 + (rem + 1);
        }
        else{
            temp = temp * 10 + (rem - 9);
        }
        n /= 10;
    }

    int m = 0;
    while(temp > 0){
        int rem = temp % 10;
        m = m * 10 + rem;
        temp /= 10;
    }
    if(flag1 == true)
        cout << 0;
    
    cout << m;

    if(flag2 == true)
        cout << 0; 
}