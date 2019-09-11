#include <iostream>


void print(int input);

int main () {
	
	
	int input = -1;
	//std::cout << "this is a test" << std::endl;

	
	while(input != 0){
	print(input);
	std::cin >> input;
	std::cout << input << std::endl;	
	}


}

void print(int input) {
	std::cout << "\t=========================" << std::endl;
	std::cout << "\tMerely Average Calculator" << std::endl;
	std::cout << "\t=========================" << std::endl;
	std::cout << "The current average is " << input << "\n" << std::endl;
	std::cout << "1 - Enter a new value" << std::endl;
	std::cout << "2 - Auto enter a random value" << std::endl;
	std::cout << "9 - Clear the calculator" << std::endl;
	std::cout << "0 - Exit\n" << std::endl;
	std::cout << "Command?\n" << std::endl;
	return;
}
