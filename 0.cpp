//buoc 1 tao ra 1 mang co n so 0 de luu gia gtri nhi phan 
    //* VD 3 -> 000  , 4->0000

#include<iostream>
#include<math.h>
#include<string>
using namespace std;
void mangnhiphan(int a[],int n){ 
    for(int i=0;i<n;i++){
        a[i]=0;
    }
}
long duyetmang_trenxuong(int a[],int n){
    for(int i = n-1;i>=0;i--){
        if(a[i]==0){
            a[i]=1;
            for(int j = i+1;j<n;j++){
                a[j] = 0;
            }
            break;
        }
    }
}
void inmang(int a[], int n){
    for(int i = 0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
int main(){
    int n;  cin >> n;
    int a[10000];
    mangnhiphan(a,n);
    inmang(a,n);
    for(int i=0;i<pow(2,n)-1;i++){
        duyetmang_trenxuong(a,n);
        inmang(a,n);
        
    }
}