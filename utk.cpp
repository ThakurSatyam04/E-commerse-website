#include<iostream>
using namespace std;

int main(){
    
    string s = "Anjali";
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            s[i] = '1';
        }
    }
    cout<<s;

    return 0;
}