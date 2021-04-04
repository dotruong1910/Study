#include<iostream>
#include<string>
using namespace std;
void swap(char&a , char&b){
    char temp = b;
    b = a;
    a =temp;

}
void hoanvi(string s, int i){
    if(i == s.length()-1){
        cout<<s<<endl;
    }
    else{
        for(int j = i; j<s.length(); j++){
           // cout<<"s = "<<s<<endl;
            swap(s[i],s[j]);
            hoanvi(s,i+1);
            swap(s[i],s[j]);
        }
    }
}
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    hoanvi(s,0);
    return 0;
}