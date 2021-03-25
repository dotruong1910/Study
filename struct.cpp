#include<iostream>


using namespace std;
struct Biginteger{
    string number;
    
    Biginteger(){

    }
    Biginteger(int _num){
        num = _num;
    }
    Biginteger(string _number){
        number = _number;
    }
    void print() const{
        cout<<"The big integer is: "<<num;
    }
    int getValue() const; // return value if can convert to int else -1
    
    void add(const BigInteger& other); // Add other to this number
    BigInteger add(const BigInteger& num1, const BigInteger& num2); // Add num1 with num2 and return new result
};