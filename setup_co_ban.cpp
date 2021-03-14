bool binary_search(int a[],int x,int array_size){
    int mid;
    int right= array_size,left=0;
     while(left<=right){
        mid=(right+left)/2;
        if(x==a[mid]){
            return true;
        }
        else{
            if(a[mid]< x)
            left=mid+1;
            else{
                right=mid-1;
            }
        }
    }
    return false;
}
//*tính a^n % m bằng cách đệ qui
long long int  modular(long long int a, long long int  n,long long int  m){
    if(n==0) return 1;
    if(a==0) return 0;
    if (n == 1){
		if (a >= m){
			return a % m;
		}
		else{
			return a;
		}
	}
	if(n%2==0) return (modular(a,n/2,m)*modular(a,n/2,m))%m;
	if(n%2!=0) return (modular(a, n / 2, m) * modular(a, n / 2, m) * modular(a, 1, m))%m;
}
//**Sàng Eratosthenes, Sàng số nguyên tố
/*
*#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    bool b[n];
    int p = 2;
    //*thuật toán bắt đầu từ đây
        //* tạo 1 mảng có giá trị từ 2 đến n
    for(int i = 2; i<=n;i++){
        a[i] = i;
    }
        //*đánh tất cả các giá trị là true

    for(int i = 2; i<=n;i++){
        b[i] = true;
    }
        //*bắt đầu sàng
    for(int i = 2;i*i<=n;i++){
        if(b[i]==true){
            for(int j=i*2; j<=n ; j+=i)
            b[j]=false;
        }   
    }
        //*in ra kết quả
    for(int i =2; i<=n ; i++){
        if(b[i]==true){
            cout<<a[i]<<" ";
        }
    }
    
}
*/
