#include<iostream>
using namespace std;

class Parent
{
    private:  int x=10;
    public:
    
   //   Parent(int y) { x=y;}
   //   Parent() { x=0;}
     //friend Parent operator+(Parent); 
     void showdata()
     {
        cout<<x<<" ";
     }
};

// Parent operator+(Parent a,Parent b)
// {
//     Parent temp;
//     temp.x= b.x + a.x;
//     return temp;
// }

int main()
{
   Parent a;
   //  Parent c=a+b;
    a.showdata();
   return 0;
}