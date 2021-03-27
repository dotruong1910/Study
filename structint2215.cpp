//co 3 truong hop hai so cung am --> phep cong
                //    hai so cung duong --> phep cong
                    //1 so am 1 so duong  --> phep tru  0 la am 1 la duong
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct BigInteger{
    int sign;
    string number;
};
BigInteger sum(BigInteger first, BigInteger second){
    //lay do dai 2 xau
    BigInteger ketqua;
    string zeronum ="";
    int len1 =first.number.length(),len2 = second.number.length();
    // phep +
    if((first.sign == 1 && second.sign ==1) ||(first.sign == 0 && second.sign == 0)){
        if((first.sign == 1 && second.sign ==1)) ketqua.sign = 1; // gan dau +
        if((first.sign == 0 && second.sign ==0)) ketqua.sign = 0; // gan dau  -
        if(len1 - len2 > 0 || len2 - len1 > 0||len1 == len2){
            //tao 2 mang de swap xau;
            string max , min;
            //tao mang so 0;
            if(len1 - len2 > 0 || len2 - len1 > 0){
                int l = abs(len1 - len2);
                for(int  i= 0 ; i<l;i++){
                    zeronum+='0';
                }
                //so 1 lon hon so 2 phep +  lam swap 2 so
                if(len1 > len2){
                    max = first.number;
                    min = second.number;
                    min = zeronum+min;// chhen so 0
                }
                else if(len1 <len2){
                    max=second.number;
                    min=first.number;
                    min = zeronum+min;//chen so 0
                }
            }
            // TH bang
            else if(len1 == len2){
                max="0"+first.number;
                min="0"+second.number;
            }
                ketqua.number=max;
                for(int i = max.length()-1 ; i>=0;i--){
                    int check = max[i] - 48 + min[i]-48;
                    int temp  = check %10;
                    if(check <10){
                        temp = 0;
                    }
                    if((check +temp>= 10)){
                        ketqua.number[i]=temp;
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
                        ketqua.number[i]=int((max[i]-'0') +(min[i]-'0'))  ;
                    }

                }
            // co the save time bang cach dung moi ham erase de xoa so 0 o dau
             if(ketqua.number[0]+'0' == '0'){
                for(int i =0 ; i<ketqua.number.length()-1;i++){
                    ketqua.number[i] = ketqua.number[i+1];
                }   
                ketqua.number.erase(ketqua.number.length()-1);
            }
            for(int i =0 ; i<ketqua.number.length();i++){
                ketqua.number[i]+='0';
            }
        }
        return ketqua;
    }
    // phep -
    else if(first.sign == 1 && second.sign == 0 || first.sign == 0 && second.sign == 1){
        string max,min;
        if(len1 -len2 >0){
        max = first.number;
        min = second.number;
        ketqua.sign = first.sign;
        int l = abs(len1 - len2);
    //tao mang so 0;
        for(int  i= 0 ; i<l;i++){
            zeronum+='0';
        }
        min=zeronum+min; 
    }
    else if(len2 -len1>0){
        max =second.number;
        min =first.number;
        ketqua.sign = second.sign;
    int l = abs(len1 - len2);
    //tao mang so 0;
        for(int  i= 0 ; i<l;i++){
            zeronum+='0';
        }
        min=zeronum+min; 
    }
    if(len1 == len2){
        for(int i=0 ; i<len1; i++){
            int check = int((first.number[i]-48))-((second.number[i]-48));
            if(check >0){
                max = first.number;
                min = second.number;
                ketqua.sign = first.sign;
                break;
            }
            else if(check <0){
                max =second.number;
                min =first.number;
                ketqua.sign = second.sign;
                break;
            }
        }
        max="0"+max;
        min="0"+min;
    }
    ketqua.number =max;
    //cout<<max<<"\n"<<min<<endl;
    for(int i=max.length()-1 ; i>=0;i--){
        int check = int((max[i]-48))-((min[i]-48));
        if(check<0){
            ketqua.number[i] =(max[i]-48+10)-(min[i]-48);
            if(int(min[i-1]-48)+1>=10){
                        min[i-1]='0';
                        min[i-2]=char(min[i-2]+1);    
                    }
                    else{
                        min[i-1]=char(min[i-1]+1);
                    }
        }
        else ketqua.number[i] = char((max[i]-48)-(min[i]-48));
    }
    if(ketqua.number[0]+'0' == '0'){
                for(int i =0 ; i<ketqua.number.length()-1;i++){
                    ketqua.number[i] = ketqua.number[i+1];
                }   
                ketqua.number.erase(ketqua.number.length()-1);
    }
    //else if(ketqua.number[0]+'0' == '0' && ketqua.number.length() == 1) ketqua.sign = 0;
    for(int i =0 ; i<ketqua.number.length();i++){
            ketqua.number[i]= ketqua.number[i]+'0';
        }  
    return ketqua;  
    } 
    return ketqua;
}



int main(){
     BigInteger n,n2;
    cin >> n.sign >> n.number >> n2.sign >> n2.number;
    BigInteger c = sum(n,n2); 
    if(c.sign == 1)
        cout<<c.number;
    else if(c.sign == 0)
        cout<<"-"+c.number<<"";
}
