#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    int  b[n];
    for(int i =0 ; i<n;i++){
        cin>>a[i];
    }
    for(int i =0 ; i<n;i++){
        b[i] = 1;
    }
    //sort(a,a+n);
    for(int i =1 ; i<n;i++){
        //cout<<a[i] <<" "<< a[n-i-1]<<endl;
        if(b[i]==1){
            if(a[i] == a[i-1]){
                b[i-1] = 0;
            }
        } 
    }   
    for(int i =0 ; i<n;i++){
        if(b[i] == 1)
            cout<<a[i]<<" ";
    }
    
}