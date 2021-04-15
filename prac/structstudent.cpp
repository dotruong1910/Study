#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
struct Student
{
string id;
string name;
double gpa;
};
bool cmp(const Student& a, const Student& b){
    return a.gpa > b.gpa;
}
void print(const vector<Student>& student_list){
    for(int i  =0; i < student_list.size(); i++ ){
    cout<<student_list[i].id <<" "<<student_list[i].name<<" "<<student_list[i].gpa<<endl;

    }
};
int  find(const vector<Student>& students,string a){
   for(int i = 0;i<students.size();i++){
    if(students[i].id == a)     return i;
    }
    return -1; 
};
vector<Student> top3(const vector<Student>& students){
       vector<Student> v1;
       vector<Student>v2;
    for(int i = 0; i<students.size();i++){
           v1.push_back(students.at(i));
    }
    for(int i = 0 ;i<students.size();i++){
        for(int j  = 0; j< students.size();j++){
            if(v1[i].gpa > v1[j].gpa){
                Student temp =v1[i];
                v1[i] = v1[j];
               v1[j] = temp;
            }
        }
    }
    for(int i = 0; i < 3;i++){
        v2.push_back(v1[i]);
    }
    return v2;
}
int main(){
 vector<Student> students = {
    {"1", "Le Quang Duy", 5.5},
    {"2", "Nguyen Tan Dat", 6},
    {"10", "Cao Duy Manh", 3},
    {"4", "Nguyen Van Ngoc", 4.5},
    {"3", "Trieu Dinh Nguyen", 4}
};
vector<Student> top_students = top3(students);
print(top_students);
cout << find(students, "10") << endl;
cout << find(students, "11") << endl;
}