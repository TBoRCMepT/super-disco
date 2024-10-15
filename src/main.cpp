#include <iostream>

int big_bebra(const int a, const int b) {
	return a+b;
}

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << big_bebra(a,b);
	return 0;
}
