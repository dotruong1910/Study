//buoc 1 tao ra 1 mang co n so 0 de luu gia gtri nhi phan 
    //* VD 3 -> 000  , 4->0000

#include<iostream>
#include<math.h>
#include<string>
using namespace std;
//thuật toán sinh bài 1,2 hàm nâng cao
void mangnhiphan(int a[],int n){ 
    for(int i=0;i<n;i++){
        a[i]=0;
    }
}
int duyetmang(int a[],int n){
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
bool check(int a[], int n,int so0,int so1){
    int count1 = 0;
    int count0 = 0;
    for(int i = 0;i<n;i++){
        if(a[i]==1) count1++;
        else count0++;
    }
    if(count1==so1 && count0==so0) return true;
    return false;
}
void mang_danh_dau(string s,int a[]){
    for(int i = 0; i<s.length();i++){
        a[i] = 0;
    }
}
int main(){
    string s; cin >> s;
    int a[10000]
    /* mangnhiphan(a,n);
    inmang(a,n); */
    for(int i=0;i<pow(2,n)-1;i++){
        duyetmang(a,n);
        if(check(a,n,so0,so1) == true)inmang(a,n);
        
    }
}