
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

int replace(const char *filename, const std::string &s1, const std::string &s2)
{
	// ifstream constructor constructs an object, open a file
	// this file will be closed in destructor (no need to close it manually)
	std::ifstream infile(filename);

	// if the file cannot be opened, the stream's failbit flag is set:
	if (infile.rdstate() & std::ifstream::failbit) {
		std::cerr << "File cannot be opened" << std::endl;
		return EXIT_FAILURE;
	}
	if (s1.empty()) {
		std::cerr << "Nothing to replace." << std::endl;
		return EXIT_FAILURE;
	}

	// assigns a new value to the string, replacing its current contents
	// iterators read successive elements from a stream buffer
	std::string file_content;
	file_content.assign(std::istreambuf_iterator<char>(infile), std::istreambuf_iterator<char>());
	
	std::string name(filename);
	name += ".replace";

	// create a new file and check if it's open
	std::ofstream new_file(name);
	if (infile.rdstate() & std::ifstream::failbit) {
		std::cerr << "New file cannot be opened" << std::endl;
		return EXIT_FAILURE;
	}

	std::string::size_type len_s1(s1.length());
	std::string::size_type len_s2(s2.length());
	std::string::size_type i(0);
	while (i != std::string::npos) {
		i = file_content.find(s1, i);
		if (i == std::string::npos)
			break;
		file_content.erase(i, len_s1);
		file_content.insert(i, s2);
		i += len_s2;
	}
	new_file << file_content;
	return EXIT_SUCCESS;
}

int main(int argc, const char **argv)
{
	if (argc != 4) {
		std::cerr << "Required arguments: ./replace, filename, " \
					 "string to replace, string to replace with" << std::endl;
		return EXIT_FAILURE;
	}
	replace(argv[1], argv[2], argv[3]);
	return EXIT_SUCCESS;
}
