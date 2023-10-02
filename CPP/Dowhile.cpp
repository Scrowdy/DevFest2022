#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	
    int n;



    do
    {
        cout << "Please enter a positive integer number: \n";
	    cin >> n;
        if (n>0)
        {
            (n % 2 == 0) ? cout << n << "  is even." << endl :  cout << n << " is odd." << endl;
        }
        
    } while ( n > 0);
    


	return EXIT_SUCCESS;
}
