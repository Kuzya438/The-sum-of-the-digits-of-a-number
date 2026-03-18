#include <iostream>
#include <cstdlib>

int main() {
	setlocale(LC_ALL, "RU");

	int var{}, sum{};
	
	std::cout << "Введите целое число:" << std::endl;
	std::cin >> var;

	while (var != 0) {
		sum += var % 10;
		var /= 10;
	}
	std::cout << "Сумма: " << sum << std::endl;

	return EXIT_SUCCESS;
}
