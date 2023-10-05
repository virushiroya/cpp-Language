#include<iostream>

using namespace std;

class viru
{
    int a=10,b=20;
   public:

   viru()
   {
       cout<<a+b<<endl; 
       
   }
   viru(int a, int b)
   {
        cout<<"Hello"<<" "<<name<<endl;
   }
   void viru1()
   { 
    
       cout<<a*b<<endl;
      
   }
   void viru2()
   {
       cout << "hello" <<endl;
   }
};


int main()
{
    viru v1;
    viru v2("mehh!!!!!");
    v1.viru1();
    v1.viru2();
  
}