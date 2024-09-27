#include <fstream>

void    replace(std::string &fileContent, std::string s1, std::string s2)
{
    int pos = fileContent.find(s1);

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
        std::ifstream file(av[1]);
        std::string  fileContent;
        std::string outName(av[1]);
        std::string  line;

        while (std::getline(file, line))
            fileContent += line + '\n';
        outName += ".replace";
        replace(fileContent, av[2], av[3]);
        std::ofstream repFile(outName);
        repFile << fileContent;
    }
}
