#include <iostream>
#include "player.cpp"

int main(int argc, char *argv[])
{
	std::cout << "Hello world!" << std::endl;

	Player player("Tidus");

	std::cout << player.getPlayerGold() << std::endl;
}