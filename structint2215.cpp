//co 3 truong hop hai so cung am --> phep cong
                //    hai so cung duong --> phep cong
                    //1 so am 1 so duong  --> phep tru  0 la am 1 la duong
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Biginteger{
    int sign;
    string num;
};
Biginteger sum(Biginteger first, Biginteger second){
    //lay do dai 2 xau
    Biginteger ketqua;
    string zeronum ="";
    int len1 =first.num.length(),len2 = second.num.length();
    // phep +
    if((first.sign == 1 && second.sign ==1) ||(first.sign == 0 && second.sign == 0)){
        if(len1 - len2 > 0 || len2 - len1 > 0||len1 == len2){
        //tao 2 mang de swap xau;
        string max , min;
        //tao mang so 0;
        if(len1 - len2 > 0 || len2 - len1 > 0){
            int l = abs(len1 - len2);
            for(int  i= 0 ; i<l;i++){
                zeronum+='0';
            }
        if(len1 > len2){
            max = first.num;
            min = second.num;
            min = zeronum+min;
        }
        else if(len1 <len2){
            max=second.num;
            min=first.num;
            min = zeronum+min;
        }
        }
        //so 1 lon hon so 2 phep +  lam swap 2 so
        else if(len1 == len2){// TH bang
            max="0"+first.num;
            min="0"+second.num;
        }
            ketqua.num=max;
            for(int i = max.length()-1 ; i>=0;i--){
                int check = max[i] - 48 + min[i]-48;
                int temp  = check %10;
                if(check <10){
                    temp = 0;
                }
                if((check +temp>= 10)){
                    ketqua.num[i]=temp;
                    if(int(min[i-1]-48)+1>=10){
                        min[i-1]='0';
                        min[i-2]=char(min[i-2]+1);    
                    }
                    else{
                        min[i-1]=char(min[i-1]+1);
                    }
                }
                else{
                    temp = 0;
                    ketqua.num[i]=int((max[i]-'0') +(min[i]-'0'))  ;
                }

            }
        
        if(ketqua.num[0]+'0' == '0'){
        for(int i =0 ; i<ketqua.num.length()-2;i++){
            ketqua.num[i] = ketqua.num[i+1];
           // ketqua_chuan.num[i] = ketqua.num[i];
        }
        ketqua.num.erase(ketqua.num.length()-1);
        }
        for(int i =0 ; i<ketqua.num.length();i++){
            ketqua.num[i]+='0';
        }
        }
        return ketqua;
    }
    else if(first.sign == 1 && second.sign == 0 || first.sign == 0 && second.sign == 1){

    } 
}


int main(){
     Biginteger n,n2;
    cin >> n.sign >> n.num >> n2.sign >> n2.num;
    Biginteger c = sum(n,n2); 
    cout<<c.num;
}
