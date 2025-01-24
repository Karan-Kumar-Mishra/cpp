#include "karan.h"
void function()
{
   cout<<"function is running ";
}
int main()
{
  auto pointer_of_function=function;

  pointer_of_function();

   return 0;
}
