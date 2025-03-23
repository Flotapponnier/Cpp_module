#include <fstream>
#include <iostream>


bool open_file(std::ifstream &file, std::ofstream &file_replace, const std::string& filename)
{
    file.open(filename, std::ios::in);
    if (!file.is_open())
    {
        std::cerr << "Error : Failed to open input file \n";
        return false;
    }
    std::cout << "Input file opened successfully \n";
    
    std::string filename_replace = filename + ".replace";
    file_replace.open(filename_replace, std::ios::out);
    if (!file_replace.is_open())
    {
        std::cerr << "Error : Failed to open output file \n";
		file.close();
        return false;
    }
    std::cout << "Output file opened successfully: " << filename_replace << "\n";
    
    return true;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    std::ifstream file;
    std::ofstream file_replace;
	std::cout<<"Find string " << argv[2] <<" and replace with " << argv[3] << " in file named : " << filename + "(.replace)" << "\n";
    if (!open_file(file, file_replace, filename))
        return 1;
    std::string line;
	while (std::getline(file, line))
	{
		std::string result = "";
		size_t pos = 0;

		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			result += line.substr(0, pos);
			result += s2;
			pos += s1.length();
			line = line.substr(pos);
			pos = 0;
		}
		result += line;
		file_replace << result << '\n';
	}
    file.close();
    file_replace.close();
    std::cout << "Files processed and saved.\n";
    return 0;
}
