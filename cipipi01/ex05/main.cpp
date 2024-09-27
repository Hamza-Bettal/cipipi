#include "harl.hpp"

int main()
{
    Harl msg;

    msg.complain("DEBUG");
    std::cout << "\n\n";
    msg.complain("INFO");
    std::cout << "\n\n";
    msg.complain("WARNING");
    std::cout << "\n\n";
    msg.complain("ERROR");
    std::cout << "\n\n";
    msg.complain("walo~");
}