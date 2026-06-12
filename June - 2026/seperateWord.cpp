#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    string str;
    for (int i=0; i<s.size(); i++){
        if(s[i]==' ' && str.empty()){
            continue;
        }
        if((int)s[i]!=32){
            str.push_back(s[i]);
        }
        else{
            str[0] = toupper(str[0]);
            cout << str << endl;
            str.clear();
        }
         
    }
    if(!str.empty()){
        str[0] = toupper(str[0]);
        cout << str << endl;    
    }
    return 0;
}