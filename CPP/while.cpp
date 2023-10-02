#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	
    int n;
    int number;
    int i = -1;

    cout << "Please enter a positive integer number: \n";
	cin >> n;

    number = n;

    while (n > 100)
    {
        cout << n << " ÷ 2 = " << n / 2 << endl;
        n = n / 2;
        i++;
    }
    
    cout <<"the number " << number << " can be divided " << i << " times" <<endl;


	return EXIT_SUCCESS;
}
