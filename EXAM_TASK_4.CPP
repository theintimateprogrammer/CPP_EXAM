#include<iostream>

using namespace std;

class A{
    
    public:
    
    int number;
    
    void setdata(){
        
        cout<<"enter the number :";
        cin>>number;
        
        
        
    }
    
};

class B:public A{
    
  public:
  int square;
  
  void getdata(){
      
      square=number*number;
      cout<<"square number is ::"<<square<<endl;
      
      
  }
};


class c:public A{
    
  public:
  int cube;
  
  void getdata(){
      
      cube=number*number*number;
      cout<<"cube number is ::"<<cube<<endl;
      
      
  }
};

int main(){
    
    B obj1;
    c obj2;
    obj1.setdata();
    obj1.getdata();
    
    obj2.setdata();
    obj2.getdata();
    
    
}
 
