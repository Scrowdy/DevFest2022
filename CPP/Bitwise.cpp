//////////////////////////////////////////////////////
// BitwiseOperators.cpp
//
// demonstration of use of bitwise operators
// in the C++ language
//
// Author:	Reiner Dojen
// Date:	29.09.2005
//////////////////////////////////////////////////////

#include <cstdlib>
#include <iostream>
#include <bitset>

using namespace std;

int main()
{

	int a{}, b{};	// variables for values
	int bitmask{};	// variable for bit-mask
	int result{};   // variable for some operation results

    cout << "Please enter a: \n";
    cin >> a;
    cout << "Please enter b: \n";
    cin >> b;
    
    result = a & b;
    //cout << "\n\na = 0x" <<hex << a << endl;
    cout << "0x" <<hex << a << " AND 0x" <<hex << b << " = 0x" <<hex << result << endl;

    result = a | b;
    cout << "0x" <<hex << a << " OR 0x" <<hex << b << " = 0x" <<hex << result << endl;

    result = a ^ b;
    cout << "0x" <<hex << a << " XOR 0x" <<hex << b << " = 0x" <<hex << result << endl;

    result = ~(a && b);
    cout << "0x" <<hex << a << " NAND 0x" <<hex << b << " = 0x" <<hex << result << endl;

    result = ~(a | b);
    cout << "0x" <<hex << a << " NOR 0x" <<hex << b << " = 0x" <<hex << result << endl;
    
    result = a >> b;
    cout << "0x" <<hex << a << " Shift Right by " << b << " bits = 0x" <<hex << result << endl;

    result = a << b;
    cout << "0x" <<hex << a << " Shift Left by " << b << " bits = 0x" <<hex << result << endl;

    //cout << "\n\na = " << a << " = " << bitset<8>(a);
	//cout << "\n\nb = " << b << " = " << bitset<8>(b);

	return EXIT_SUCCESS;
}

