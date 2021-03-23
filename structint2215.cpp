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
    string num;
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
Biginteger sum(Biginteger first, Biginteger second){
    int len1 =first.num.length();
    int len2 = second.num.length();
    string zeronum ="";
    if(len1 - len2 > 0 || len2 - len1 > 0){
        for(int  i= 0 ; i<abs(len1 - len2);i++){
            zeronum+='0';
        }
        if(len 1 > len 2){
            string sum =" "+first.num;
            char c[len1];
            for(int i=len1 ; i >= 0;i++){
                c[i] = '0';
            }
            second.num = zeronum+second.num;
            for(int i = len1-1 ; i>=0;i--){
                if(first.num[i]+48 +second.num[i]+48+c[i] >= 10){
                    c[i-1] ='1';
                    sum[i]=first.num[i]+48 +second.num[i]+48 + c[i] + 48 -'10';
                }
                else{
                    sum[i]=first.num[i]+48 +second.num[i]+48 + c[i] + 48 -'10';
                }

            }
        
        }    
        else{
            first.num = zeronum + first.num;
        } 


    }




    string tong;
} 
int main(){
    int n; cin >> n;
    Student st;
    string _delblank;
    char c;
    int index;
    double max = 0;
    vector<string> v;
    vector<double> _gpa;
    for(int i = 0; i < n;i++){
        getline(cin,st.msv,',');
        cin.ignore(256,' ');
        getline(cin,st.name,',');
        v.push_back(st.name);
        //cin.ignore(256,' ');
        cin >> st.gpa;
        _gpa.push_back(st.gpa);

    }
    for(int i = 0 ; i<n;i++){
        if(_gpa.at(i) - max > 0){max = _gpa.at(i);
        
        index = i;
        }
        
    }
    /* for(int i =0 ; i<n;i++){
        cout<<_gpa.at(i)<<" ";
    } 
    cout<<endl;
    for(int i =0 ; i<n;i++){
        cout<<v.at(i)<<" ";
    }  */
    cout<<v.at(index);
    //_delblank = v.at(max);
    /* for(int i = 0 ; i<n;i++){
        cout<<_delblank[i];
    } */
   // cout <<v.at(max)<<endl;
    return 0;
}