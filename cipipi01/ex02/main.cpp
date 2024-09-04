#include <iostream>
#include <string>

using namespace std;

int main()
{
    string stringPTR = "HI THIS IS BRAIN";
    string stringREF = stringPTR;

    cout << "====== Memory address =======\n" << endl;
    cout << "stringPTR memory address: " << &stringPTR << endl;
    cout << "stringREF memory address: " << &stringREF << endl;
    
    cout << "\n\n========= Value =========\n" << endl;
    cout << "stringPTR value: " << stringPTR << endl;
    cout << "stringREF value: " << stringREF << endl;   
}