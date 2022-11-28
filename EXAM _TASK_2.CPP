
#include<iostream>

using namespace std;

class mother{
    
    public:
    
    void display(){
        
        cout<<"information to print mother behave ::"<<endl;
        
        cout<<"mothe is so caring person"<<endl;
        cout<<"mother is good nature"<<endl;
    }
    
};


class daughter : public mother{
    
    public:
    
    void display2(){
        
        
        cout<<"daughter is angery "<<endl;
        
        cout<<"daughter is not completed home work after mom is angery "<<endl;
    }
    
    
};


int main(){
   
    daughter obj;
    obj. display();
    obj. display2();
    
   
   
    
    
}

