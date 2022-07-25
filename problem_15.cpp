
/* Program to sort the first half into the incresing order and second f=half into descending order */

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n / 2 ; i++){
        for(int j = 0; j < n / 2; j++)
            if(a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
    }

    for(int i = n / 2; i < n ; i++){
        for(int j = n / 2 + 1; j < n - 1; j++)
            if(a[j] < a[j + 1])
                swap(&a[j], &a[j + 1]);
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}