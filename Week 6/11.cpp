// Write a program to sort the lines of a text file alphabetically.

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

void sort_lines(const std::string& file_name)
{
    std::ifstream file;
    std::ofstream new_file;

    file.open(file_name);
    new_file.open("./files/new_file.txt");

    if (file.is_open() && new_file.is_open())
    {
        std::vector<std::string> lines;
        std::string str;
        while (std::getline(file, str))
        {
            lines.push_back(str);
        }
        std::sort(lines.begin(), lines.end());

        for (auto vec : lines)
        {
            new_file << vec << std::endl;
        }
    }
    else 
    {
        std::cout << "Error!";
    }

    file.close();
    new_file.close();

    std::remove(file_name.c_str());
    std::rename("./files/new_file.txt", file_name.c_str());
}