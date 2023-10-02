#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int grade;
    //char letter;
	
	cout << "Please enter the grade: \n";
	cin >> grade;
    
    if (grade >= 85){
        cout << "A1"<< endl;
    }
    else if (grade < 85 && grade >= 80){
        cout << "A2"<< endl;
    }
    else if (grade < 80 && grade >= 75){
        cout << "B1"<< endl;
    }
    else if (grade < 75 && grade >= 70){
        cout << "B2"<< endl;
    }
    else if (grade < 70 && grade >= 65){
        cout << "B3"<< endl;
    }
    else if (grade < 65 && grade >= 60){
        cout << "C1"<< endl;
    }
    else if (grade < 60 && grade >= 55){
        cout << "C2"<< endl;
    }
    else if (grade < 55 && grade >= 45){
        cout << "C3"<< endl;
    }
    else if (grade < 45 && grade >= 35){
        cout << "D1"<< endl;
    }
    else if (grade < 35 && grade >= 25){
        cout << "D2"<< endl;
    }
    else if (grade < 25 && grade >= 0){
        cout << "F"<< endl;
    }



	return EXIT_SUCCESS;
}
