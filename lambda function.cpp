#include<iostream>
using namespace std;
auto testing=[&]()-> void{
 cout<<" lambda function is running ";
};

int main()
{
   // lambda function
  testing();
 
   return 0;
}
