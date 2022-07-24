
/* Program to print the prime numbers between given range*/

#include <iostream>
using namespace std;

int main(){
    int l, u;
    bool flag = false;

    cout << "Enter the lower bound : " << endl;
    cin >> l;

    cout << "Enter the upper bound : " << endl;
    cin >> u;

    cout << "\nThe prime between " << l << " " << u << " are : " << endl; 

    if(l == 1)
        l += 1;

    for(int i = l; i <= u; i++){
        flag = false;
        for(int j = 2; j < i - 1; j++){                
            if(i % j == 0){
                flag = true;
                break;
            }
        }
        if(!flag)
            cout << i << " ";

    }
    cout << endl;

}