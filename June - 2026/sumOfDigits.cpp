#include<iostream>
using namespace std;

int sumOfDigits(int a){
    int sum = 0;
    while(a>0){
        sum = sum + a%10;
        a = a/10;
    }
    return sum;
}

int main(){
    int a,b, sum;
    cin >> a >> b;
    sum = sumOfDigits(a) + sumOfDigits(b);
    cout << sum;
    return 0;
}