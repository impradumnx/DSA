#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    bool isPalindrome = true;
    for (int i=0; i<=(s.size())/2; i++){
        if( s[i] !=s [s.size()-1-i] ){
            isPalindrome = false;
        }
    }
    if(isPalindrome == true) cout << "string is palindrome" << endl;
    else cout << "string is not palindrome" << endl;

    return 0;
} 