#include <iostream>

int main(int argc ,char** argv) {
	std::cout << "hello" << std::endl;
#ifdef OUTPUT
	std::cout << "output" << std::endl;
#endif
}
