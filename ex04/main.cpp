#include <iostream>
#include <fstream>
#include <string>

std::string replace(const std::string& line, const std::string& s1, const std::string& s2)
{
    std::string new_str;
    size_t      pos = 0;
    size_t      found = 0;

    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        new_str.append(line, pos, found - pos);
        new_str.append(s2);
        pos = found + s1.length();
    }
    new_str.append(line, pos, line.length() - pos);
    return new_str;

}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: number arg" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cout << "Error: s1 empty" << std::endl;
        return (1);
    }

    std::ifstream fd(filename);
    if (!fd)
    {
        std::cout << "Error: open fd failure" << std::endl;
        return (1);
    }

    std::ofstream outputfd(filename + ".replace");
    if(!outputfd)
    {
        std::cout << "Error: output failure" << std::endl;
        return (1);
    }

    std::string line;
    while(std::getline(fd, line))
        outputfd << replace(line, s1, s2) << std::endl;
    
    fd.close();
    outputfd.close();

    std::cout << "SUCCESS" << std::endl;
    return 0;

}
