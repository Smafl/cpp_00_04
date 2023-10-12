
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

int replace(const char *filename, const std::string &s1, const std::string &s2)
{
	std::ifstream infile(filename);
	if (infile.rdstate() & std::ifstream::failbit)
	{
		std::cerr << "File cannot be opened" << std::endl;
		return EXIT_FAILURE;
	}
	if (s1.empty())
	{
		std::cerr << "Nothing to replace." << std::endl;
		return EXIT_FAILURE;
	}
	std::stringstream buffer;
	buffer << infile.rdbuf();
	std::string file_content(buffer.str());
	std::string name(filename);
	name += ".replace";
	std::ofstream new_file(name);
	if (infile.rdstate() & std::ifstream::failbit)
	{
		std::cerr << "New file cannot be opened" << std::endl;
		return EXIT_FAILURE;
	}
	std::string::size_type i(0);
	while (true)
	{
		std::string::size_type j(0);
		i = file_content.find(s1, i);
		if (i != std::string::npos)
		{

		}
	}
	return EXIT_SUCCESS;
}

int main(int argc, const char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Required arguments: ./replace, filename, " \
					 "string to replace, string to replace with" << std::endl;
		return EXIT_FAILURE;
	}
	return replace(argv[1], argv[2], argv[3]);
}
