#include<iostream>
#include<math.h>
using namespace std;
struct Complex{
    double a;
    double b;
};
/* 
*nhận đầu vào là một số phức, in ra số phức dưới dạng a+bi nếu b>0 hoặc a−bi nếu b<0. 
*Nếu b=1 hoặc b=−1 thì không in ra b. 
*Nếu a hoặc b bằng 0 thì lược bỏ phần có chứa nó. 
*Nếu cả a và b bằng 0 thì in ra 0. In thêm dấu xuống dòng ở cuối. 
*/  double module(const Complex& c){
    return sqrt(c.a*c.a+c.b*c.b);
}
    void print(const Complex& c){
        if(c.b == 1 && c.a!=0) c.b == 1?cout<<c.a<<"+i"<<endl:cout<<c.a<<"-i"<<endl;
        else{
            if(c.a == 0 && c.b != 0 && c.b!= -1 && c.b != 1)cout<<c.b<<"i"<<endl;
            else if(c.b == 0 && c.a != 0) cout<<c.a<<endl;
            else if(c.a ==0 && c.b == 0) cout<<"0\n";
            else{
                c.b > 0 ? cout<<c.a<<"+"<<c.b<<"i"<<endl:cout<<c.a<<c.b<<"i"<<endl;
            }
            
        } 

    };
    Complex add(const Complex& c1, const Complex& c2){
            Complex c3;
            c3.a = c1.a + c2.a;
            c3.b = c1.b + c2.b;
            return c3;
    };
    int compare(const Complex& c1, const Complex &c2){
        if(module(c1) == module(c2)) return 0;
        if(module(c1) > module(c2)) return 1;
        return -1;
    };
int main(){
    Complex c1 = {1, 3};
    Complex c2 = {2,1};
    print(add(c1,c2));
    cout<<compare(c1,c2);
}