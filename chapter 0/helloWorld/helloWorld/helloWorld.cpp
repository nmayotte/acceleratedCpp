#include <iostream>

int main()
{
	std::cout << "Hello, world!" << std::endl;

	std::cout << "This (\") is a quote, and this(\\) is a backslash" << std::endl;

	std::cout << "This is a sentance with a tab \t in the middle of it" << std::endl;

	std::cout << "This is the code to run the \"Hello World\" program:" << std::endl;

	std::cout <<"#include <iostream>" << std::endl;
	
	std::cout << "int main()" << std::endl;
	std::cout << "{" << std::endl;
	std::cout << "\t std::cout << \"Hello, world!\" << std::endl;" << std::endl;
	std::cout << "\t return 0;" << std::endl;
	std::cout << "}" << std::endl;

	return 0;
}