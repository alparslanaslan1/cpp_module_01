#include <iostream>
#include <fstream>
#include <string>

bool replace_in_file(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream infile(filename.c_str());
    if (!infile)
	{
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return false;
    }

    std::string content;
    std::string line;
    while (std::getline(infile, line))
	{
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
		{
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        content += line + "\n";
    }
    infile.close();

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
	{
        std::cerr << "Error: Could not create output file." << std::endl;
        return false;
    }
    outfile << content;
    outfile.close();
    return true;
}

int main(int argc, char *argv[])
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (!replace_in_file(filename, s1, s2))
	{
        return 1;
    }

    std::cout << "File successfully processed and saved as " << filename << ".replace" << std::endl;
    return 0;
}
