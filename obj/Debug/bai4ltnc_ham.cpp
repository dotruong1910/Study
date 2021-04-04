#include<iostream>
#include<string>
using namespace std;
int a[1000]={0}; // ?
// tat ca cac gia tri cua a la 0 
// i la vi tri dau xau 
    // n la do dai co the cua xau s VD ab thi la 1 2 ;  abc thi la 1 2 3 
void check(int i , int n,string s){
    // j chay tu 0 de danh dau cac ki tu dau tien cua xau con
    for( int j = 0; j<s.size();j++){
        //danh dau ki tu dau tien cua xau con
            //*cout<<"i : "<<i<<" j : "<<j<<"  n : "<<n<<"\n-->";
        a[i] = j;
        if(i == n){
            for(int k  = 1 ; k <= n ; k++){
                //*cout<<" a ["<<k<<"] : "<<a[k]<<"\n --->";
                cout<<s[a[k]];
            }
            cout<<endl;
        }
        else{
            //*cout<<" i != n"<<"\n\t--->";
            check(i+1,n,s); 
        }
    }
}
int main(){
    string s; cin >>s;
    for(int i = 1 ; i <= s.size();i+=1){
        //*cout<<"vong lap ngoai : "<<i<<"\n";
        check(1,i,s);
    }
}