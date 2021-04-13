
#include<iostream>
using namespace std;
//Trong đó widh và height lần lượt là chiều rộng và chiều cao bức ảnh, 
//pixels là mảng chứa width∗height giá trị, pixels[i∗width+j] thể hiện giá trị điểm ảnh hàng i cột j
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
unsigned int mystrlen(char* s){
    unsigned int count = 0;
    char* p =s; 
    while(*p != '\0'){ 
        p++;
        count++;
    }
    return count;
}
char *mystrcpy(char* des,const char* src){
    while(*src != '\0'){
        *des= *src;
        src++;
        des++;
    //cout<<*des;
    }
    *des = *src;
   /* while(*des != '\0'){
        cout<<*des;
        des++;
    }
    */
   return des;
}
//* bai 3
int mysum(int *start, int *end){
    int sum = 0;
    for(int* i = start;i<end;i++){
        sum += *(i);
    }
    return sum;
}
int main(){
    char s[] = "helloworld";
    char c[100];
    cout<<mystrcpy(c,"hello");
}


