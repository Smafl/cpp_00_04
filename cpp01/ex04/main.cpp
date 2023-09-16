
#include <cstdlib>
#include <iostream>

int main(int argc, const char **argv)
{
	(void)argv;
	if (argc != 4)
	{
		std::cout << "Required arguments: ./replace, filename, " \
					 "string to replace, string to replace with" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}