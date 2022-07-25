
/* Problem on implementing a browser */

#include <iostream>
using namespace std;

string browser[20] = {""};
int current = -1;
int trav = -1;

void forward(){
    if(browser[trav + 1] == ""){
        if(trav == -1)
            cout << "HOME" << endl;
        else
            cout << browser[trav] << endl;
    }
    else{
        cout << browser[++trav] << endl;
    }
}

void backward(){
    if(trav == -1 || trav - 1 == -1)
        cout << "HOME" << endl;
    else{
        cout << browser[--trav] << endl;
    }
}

void go(string p){
    browser[++current] = p;
    cout << p;
    trav = current;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        if(s == "forward")
            forward();
        else if(s == "backward")
            backward();
        else if(s == "goto"){
            string p;
            cin >> p;

            go(p);
        }
        else
            exit(0);
    }    
}