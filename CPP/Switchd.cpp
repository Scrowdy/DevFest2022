#include <iostream>
using namespace std;
 
int main ()
{
   int menu;
   int i;
   int j;


 
   while (1)
   {
      cout << "Please enter a number to choose the menu:\n";
      cout << " 1) Addition\n 2) Subtraction\n 3) Multiplication\n 4) Division\n 5) Exit\n";
      cin >> menu;
      switch( menu )
      {
      case 1 :
         cout << "Please enter two numbers:\n";
         cin >> i;
         cin >> j;
         cout << "The result is " << i+j << endl; 
         break;
      case 2 :
         cout << "Please enter two numbers\n";
         cin >> i;
         cin >> j;
         cout << "The result is " << i-j << endl; 
         break;
      case 3 :
         cout << "Please enter two numbers\n";
         cin >> i;
         cin >> j;
         cout << "The result is " << i*j << endl; 
         break;
      case 4 :
         cout << "Please enter two numbers\n";
         cin >> i;
         cin >> j;
         cout << "The result is " << i%j << endl; 
         break;
      case 5 :
         return EXIT_SUCCESS;
         break;  
         
      }
      //return EXIT_SUCCESS;
   }
 
   
   
   
}
