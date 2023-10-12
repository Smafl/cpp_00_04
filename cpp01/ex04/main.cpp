
#include <fstream>
#include <iostream>

int replace(const std::string filename, const std::string s1, const std::string s2)
{
	if (s1.empty())
	{
		std::cout << "Nothing to replace." << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

int main(int argc, const char **argv)
{
	if (argc != 4)
	{
		std::cout << "Required arguments: ./replace, filename, " \
					 "string to replace, string to replace with" << std::endl;
		return EXIT_FAILURE;
	}
	return replace(argv[1], argv[2], argv[3]);
}
