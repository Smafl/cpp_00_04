
#include <iostream>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (argv[++i]) {
		for (int j = 0; char c = argv[i][j]; ++j)
			std::cout << char(toupper(c));
	}
	std::cout << std::endl;
	return 0;
}

/* iterator
int main()
{
	std::string str = "hi";
	for (std::string::iterator iter = str.begin(); iter != str.end(); iter++)
	{
		std::cout << char(toupper(*iter));
	}
	return 0;
}
 */
