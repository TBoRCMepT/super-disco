#include <iostream>
#include <vector>

int main() {
	std::vector<int> a(10);
	for (int i = 0; i < 11; i++) {
		a[i] = i;
	}
	return 0;
}
