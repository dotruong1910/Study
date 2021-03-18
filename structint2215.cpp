#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Student{
    string msv;
    string name;
    double gpa;
};
struct Biginteger{
    int sign;
    string n;
};
struct Greeting{
    string greet;
    int iter;
};
struct Fraction{
    int denominator;
    int numerator ;
};
struct Person{
    double h,w;
};
double getBMI(Person p){
    return p.w/(p.h*p.h);
}
void printGreeting(Greeting newGreat){
    for(int i = 1; i <= newGreat.iter;i++ ){
        cout<<newGreat.greet<<" ";
    }
}
Fraction reduceFrac( Fraction &n){
    int t= n.numerator,m=n.denominator;
    while(t != m){
        if(t > m)
            t = t - m;
        else{
            m = m - t  ;
        }
    }
    n.numerator = n.numerator/t;
    n.denominator = n.denominator/t;
    return n;
}
/* Biginteger sum(Biginteger first, Biginteger second){
} */
int main(){
    int n; cin >> n;
    Student st;
    double max = -999999.0;
    vector<string> v;
    vector<double> _gpa;
    for(int i = 0; i < n;i++){
        getline(cin,st.msv,',');
        getline(cin,st.name,',');
        v.push_back(st.name);
        cin >> st.gpa;
        _gpa.push_back(st.gpa);

    }
    for(int i = 0 ; i<n;i++){
        if(_gpa.at(i) > max) max = i;
    }
    cout <<v.at(max)<<endl;
    return 0;
}