
/*The progarm to check whether the given password is strong , moderate or weak*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    string alphabetnum = "abcdefghijlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    bool num = false, special = false, letter = false;

    for(int i = 0; i < n; i++){
        if(isalpha(s[i]))
            letter = true;
        else if(isdigit(s[i]))
            num = true;
        
        size_t temp = s.find_first_not_of(alphabetnum);
        if(temp != string::npos)
            special = true;
    }

    if(num && letter && special)
        cout << "Strong password" << endl;
    else if(num && letter)
        cout << "Moderate password" << endl;
    else if(letter)
        cout << "Weak password" << endl;

    return 0;

}