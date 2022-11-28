#include<iostream>

using namespace std;

class A{
    
    public:
    
    char name[100];
    int age;
    
    void childdetails(){
        
        cout<<"enter the name";
        cin>>name;
        
        cout<<"enter the age";
        cin>>age;
        
        
    }
    
    
};

class B: public A{

public:



 void childdetails(){
     
     cout<<"name:"<<name<<endl;
     cout<<"age:"<<age<<endl;
 }
    

};
int main(){
B obj;
ptr=&obj;
obj*ptr;



ptr=childdetails();
ptr=childdetails();
}




