#include "Finder.hpp"
#include <cstddef>

void    replace(std::string &fileContent, std::string s1, std::string s2)
{
    int pos;
    size_t i = 0;
    if (!s1.compare(s2))
        return ;
    pos = fileContent.find(s1);
    while (pos != -1 && i < fileContent.length())
    {
        fileContent.erase(pos, s1.length());
        fileContent.insert(pos, s2);
        pos = fileContent.find(s1);
        i += s2.length();
    }
}

void    fill_file(char **av)
{
    std::ifstream   file(av[1]);
    std::string     fileContent;
    std::string     outName(av[1]);
    std::string     line;

    while (std::getline(file, line))
    {
        if (!file.eof())
            fileContent += line + '\n';
        else
            fileContent += line;
    }
    file.close();
    outName += ".replace";
    replace(fileContent, av[2], av[3]);
    std::ofstream repFile(outName);
    repFile << fileContent;
    repFile.close();
}

