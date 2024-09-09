#include <iostream>
#include <fstream>

using namespace std;

void    replace(string &fileContent, string s1, string s2)
{
    int pos = fileContent.find(s1);
    int i = 0;
    while (pos != -1)
    {
        fileContent.erase(pos, s1.length());
        fileContent.insert(pos, s2);
        pos = fileContent.find(s1);
    }
}

int main(int ac, char **av)
{
    if (ac == 4)
    {

        ifstream file(av[1]);
        string  fileContent((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
        string outName(av[1]);

        outName += ".replace";
        replace(fileContent, av[2], av[3]);
        ofstream repFile(outName);
        repFile << fileContent;
    }
}
