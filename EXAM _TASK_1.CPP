#include<iostream>

using namespace std;

class employees{
    
    public:
    
    int id;
    char name[100];
    char role[50];
    int salary;
    int experiance;
    char address[60];
    char email[100];
    int contact;
    
    void setter(){
        cout<<"enter the 5 employees details ::"<<endl;
        
        cout<<"enter the id:";
        cin>>id;
        
        cout<<"enter the name:";
        cin>>name;
        
        cout<<"enter the role:";
        cin>>role;
        
        cout<<"enter the salary:";
        cin>>salary;
        
        cout<<"enter the experiance:";
        cin>>experiance;
        
        cout<<"enter the address:";
        cin>>address;
        
        cout<<"enter the email:";
        cin>>email;
        
        cout<<"enter the contact : ";
        cin>>contact;
        
        
    }
    
    void getter(){
        
        cout<<"employees id:"<<id<<endl;
        cout<<"employees name:"<<name<<endl;
        cout<<"employees role:"<<role<<endl;
        cout<<"employees salary:"<<id<<endl;
        cout<<"employees experiance:"<<id<<endl;
        cout<<"employees address:"<<id<<endl;
        cout<<"employees email:"<<id<<endl;
        cout<<"employees contact:"<<id<<endl;
              
        
    }
        
};

int main(){
    
    employees obj1,obj2,obj3,obj4,obj5;
    
    obj1.setter();
    obj1.getter();
    
    obj2.setter();
    obj2.getter();
    
    obj3.setter();
    obj3.getter();
    
    obj4.setter();
    obj4.getter();
    
    obj5.setter();
    obj5.getter();
    
    
}
    
    


   
