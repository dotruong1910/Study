
//*Hàm MyFraction add(const MyFraction &f) const trả về kết quả là tổng của phân số hiện tại với phân số f.
    * !Hàm này không thay đổi giá trị của phân số hiện tại.
//*Hàm MyFraction substract(const MyFraction &f) const trả về kết quả là hiệu của phân số hiện tại với phân số f.
    * !Hàm này không thay đổi giá trị của phân số hiện tại.
//*Hàm MyFraction multiply(const MyFraction &f) const trả về kết quả là tích của phân số hiện tại với phân số f.
    * !Hàm này không thay đổi giá trị của phân số hiện tại.
//*Hàm MyFraction divide(const MyFraction &f) const trả về kết quả là thương của phân số hiện tại với phân số f.
    * !Hàm này không thay đổi giá trị của phân số hiện tại.
//*Hàm void simplify() tối giản phân số hiện tại.
//*Hàm int compare(const MyFraction &f) const 
    * ?trả về 1 nếu phân số hiện tại lớn hơn phân số f;
    * ?trả về −1 nếu phân số hiện tại nhỏ hơn phân số f;
    * ?trả về 0 nếu bằng nhau.
//*Hàm void print() const in ra phân số dưới dạng a / b nếu b≠0.
        * !Ngược lại in ra invalid.
        * !Lưu ý : cần tối giản phân số trước khi in ra kết quả.
#include<iostream>
#include<cstring>
using namespace std;
struct Image{
    int *pixels;
    int width;
    int height;

};
struct Complex{
    double a;
    double b;
};
/* 
*nhận đầu vào là một số phức, in ra số phức dưới dạng a+bi nếu b>0 hoặc a−bi nếu b<0. 
*Nếu b=1 hoặc b=−1 thì không in ra b. 
*Nếu a hoặc b bằng 0 thì lược bỏ phần có chứa nó. 
*Nếu cả a và b bằng 0 thì in ra 0. In thêm dấu xuống dòng ở cuối. 
*/
//*! Complex
    void print(const Complex& c){
        /* if(c.b == 1 || c.b == -1) cout<<c.a<<endl;
        else{
            if(c.a == 0 && c.b != 0)cout<<c.b<<"i"<<endl;
            else if(c.b == 0 && c.a != 0) cout<<c.a<<endl;
            else if(c.a ==0 && c.b == 0) cout<<"0\n";
            else{
                c.b > 0 ? cout<<c.a<<"+"<<c.b<<"i"<<endl:cout<<c.a<<"-"<<c.b<<"i"<<endl;
            }
            
        } */

    };
// *! bai 1
//*?Trong đó widh và height lần lượt là chiều rộng và chiều cao bức ảnh, 
//*?pixels là mảng chứa width∗height giá trị, pixels[i∗width+j] thể hiện giá trị điểm ảnh hàng i cột j
    void printImage(const Image& img){
        for(int i = 0;i<img.height;i++){
            for(int j = 0;j<img.width;j++){
                cout<<img.pixels[i*(img.width)+j]<<" ";
            }
            cout<<endl;
        }
    }
    Image halve(const Image&img){
    Image img_;
    img_.width = (img.width/2)+1;
        img_.height = (img.height/2)+1;
        img_.pixels = new int[img_.width*img_.height];
        int i_ = 0;
        for(int i=0;i<img.height;i++){
            if(i % 2 == 0){
                for(int j=0;j<img.width;j++){
                    if(j % 2 == 0)
                    {  
                        img_.pixels[i_] = img.pixels[i*img.width+j];
                        i_++;
                    }
                }
            }
        }
        return img_;
    }
//*! bai 8
unsigned int mystrlen(char* s){
    unsigned int count = 0;
    char* p =s; 
       while(*p != '\0'){ 
            p++;
            count++;
        }
    return count;
}
void mystrcpy(char* des, const char* src){
    while(*src != '\0'){
        *des= *src;
        src++;
        des++;
    } 
    *des ='\0';
}
void mystrcat(char* des, const char* src){
    int len = mystrlen(des);
    char* s = des+len;
    while(*src != '\0'){
        *s = *src;
        src++;
        s++;
         
    }
    *s = '\0';
}
void myreverse(char* s){
    char* start = s;
    char* end = s+mystrlen(s)-1;
    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
//*! bai 7
int mysum(int *start, int *end){
    int sum = 0;
    for(int* i = start;i<end;i++){
        sum += *(i);
    }
    return sum;
}
//*! bai 9
    //*? trường hợp số âm chưa thêm vào
        //*!! cần giải quyết private member
int gcd(int a,int b){
    if(a == 0 || b == 0 ) return a+b;
    while(a!=b){
        if(a > b) a= b-a;
        else{
            b = a -b;
        }
    }
    return a;
}
class MyFraction{
    private:
        int a,b;
    public:
    
        MyFraction(int _a , int _b ){
            MyFraction setter;
            setter.a = _a;
            setter.b = _b;
            return setter
        };
        void print() const{
            cout<<a<<"/"<<b<<endl;
        };
        MyFraction add(const MyFraction &f) const{
            MyFraction res;
            res.a= a*gcd(b,f.b)+f.a*gcd(b,f.b);
            res.b=gcd(b,f.b);
            return res;
        };
        MyFraction substract(const MyFraction &f) const{
            MyFraction res;
            res.a = a * gcd(b, f.b) - f.a * gcd(b, f.b);
            res.b = gcd(b, f.b);
            return res;
        };
        MyFraction multiply(const MyFraction &f) const{
            MyFraction res;
            res.a = a*f.a;
            res.b = b*f.b;
            return res;
        };
        MyFraction divide(const MyFraction &f) const{
                MyFraction res;
                res.a=a*f.b;
                res.b=b*f.a;
            return res;
        };
        int compare(const MyFraction &f) const{
            double a,b;
            a = a /b;
            b=f.a/f.b;
            if(a>b) return 1;
            if(a<b) return -1;
            return 0;
        };
};
        void simplify(MyFraction f){
            int uc;
            uc=gcd(f.a,f.b);
            f.a=f.a/uc;
            f.b=f.b/uc;
        };
int main(){
    MyFraction x(1, 3), y(1, 3);
    x = x.add(y);
    x.print();
}


