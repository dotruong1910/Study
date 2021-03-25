#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2,s3;
    cin >> s1 >> s2;
    string zeronum="";
    int len1 =s1.length();
    int len2 =s2.length();
    int l = abs(len1 - len2);
    //tao mang so 0;
        for(int  i= 0 ; i<l;i++){
            zeronum+='0';
        }
        s2=zeronum+s2; 
    s3 =s1;
    if(len1 == len2){
        s1="0"+s1;
        s2="0"+s2;
        s3 =s1;
    }
    for(int i = s1.length()-1 ; i>=0;i--){
                int check = s1[i] - 48 + s2[i]-48;
                int temp  = check %10;
                if(check <10){
                    temp = 0;
                }
                   /*  cout<<"check at ["<<i<<"] "<<check<<endl;
                    cout<<"s2 at "<< i<<": " <<s2[i]<<endl;
                    cout<<"s1 at "<< i<<": " <<s1[i]<<endl;
                    cout<<"temp at ["<<i<<"] "<<temp<<endl; */
                if((check+temp >= 10)){
                    s3[i]=temp;
                    if(int(s2[i-1]-48)+1>=10){
                        s2[i-1]='0';
                        s2[i-2]=char(s2[i-2]+1);    
                    }
                    else{
                        s2[i-1]=char(s2[i-1]+1);
                    }
                }
                else{
                    temp = 0; 
                    s3[i]=char(int((s1[i]-'0') +(s2[i]-'0')))  ;
                }
                cout<<"_____________\n";
            }
    for(int i =0 ; i<s3.length();i++){
            cout<<s3[i]<<" ";
            s3[i]= s3[i]+'0';
        }    
    cout<<"\n"<<s3;
}
/* 

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
// bao gom : cong_hai_xau_ki_tu.png
using namespace std;
 
void insert_num_0(string &str_1, string &str_2){
    //ch1 < ch2
    int size_1 = str_1.length();
    while(str_1.length() != str_2.length()+1){
        str_1 += '0';
    }
    
    str_2 += '0';
    for (int i = str_2.length(), rev = 0; i > 0; i--){
        str_2[i] = str_2[i-1];
        if (rev <= size_1){
            str_1[i] = str_1[size_1 - rev];
            rev++;
        }
    }
    for (int j = 0; j < str_2.length() - size_1; j++){
           str_1.at(j) = '0';
    }
    str_2[0] = '0';
}
char c_to_i(char c){
    return (c - '0');
}
#if 1
int main(){
    string  first, second ;
    cin >> first >> second;

    if (first.length() <= second.length()){
        insert_num_0(first, second);
    }else insert_num_0(second, first);
    cout << first << " " <<second << endl;


    string r = first;
    for (int i = 0; i < r.length(); i++)
        r[i] = '0';

    vector<int> sum(r.length(), 0);

    //làm theo kiểu ép về int rồi cộng như lớp 1
    for (int i = first.length() -1; i >= 0; i--){
        if (c_to_i(first[i]) + c_to_i(second[i]) + c_to_i(r[i]) >= 10){
            sum[i] = c_to_i(first[i]) + c_to_i(second[i]) + c_to_i(r[i])  - 10 ;
            r[i-1]++;
        }else {
            sum[i] = c_to_i(first[i]) + c_to_i(second[i]) + c_to_i(r[i]);
        }
    }

    if (sum[0] != 0) cout << sum[0];
    for (int i = 1; i < sum.size(); i++){
        cout << sum[i];
    }
}
#endif */