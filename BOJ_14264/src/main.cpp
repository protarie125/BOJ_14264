#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double l;
	cin >> l;

	cout << setprecision(20) << l * l * sqrt(3) * 0.5 * 0.5;

	return 0;
}