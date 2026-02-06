#include<iostream>
using namespace std;
  class Student{
    public:
    int id;
    int age;
    string name;
    int nos;

    Student(){
        cout<<" Student default constuctor"<<endl;
    }

    void study(){
        cout<< this->name <<"Studying"<<endl; //particular objects 
    }
    void bunk(){
        cout<< this->name <<"bunking"<<endl;
    }
     void sleep(){
        cout<< this->name <<"Sleeping"<<endl;
    }
    ~Student(){
        cout<<" Student Default Descructor called"<endl;
    }
};

int main(){
    Student Vikash;
    Vikash.id = 71;
    Vikash.age =19;
    Vikash.name ="Rajput";
    Vikash.nos =8;
    return 0;

}
