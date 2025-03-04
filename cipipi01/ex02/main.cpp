#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "====== Memory address =======\n" << std::endl;
    std::cout << "string memory address   : " << &str << std::endl;
    std::cout << "stringPTR memory address: " << stringPTR << std::endl;
    std::cout << "stringREF memory address: " << &stringREF << std::endl;
    
    std::cout << "\n\n========= Value =========\n" << std::endl;
    std::cout << "string value   : " << str << std::endl;
    std::cout << "stringPTR value: " << *stringPTR << std::endl;
    std::cout << "stringREF value: " << stringREF << std::endl;
}
