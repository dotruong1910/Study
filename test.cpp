#include<iostream>
#include<cstring>
using namespace std;


void rFilter(char *s) {
    // Your code goes here
    int len = strlen(s);
    char* s1 = s+len-1;
    while(*(s1) >= 0  && *(s1) <=64 || *(s1) >=91 && *(s1) <= 96 || *(s1) >= 123){
        *(s1)='_';
        s1--;
    }
}
int main(){
    char *s;
    s = new char[50];
    cin >> s;
    rFilter(s);
    cout << s;
}