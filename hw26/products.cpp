#include "products.h"

void printProd(product& P) {
	std::cout << "��������: " << P.name << std::endl;
	std::cout << "���-�� ������: " << P.number << std::endl;
	std::cout << "���� �� ��.: " << P.price << std::endl;
}
int fullPrice(product& P) {
	return P.number * P.price;
}
void sell(product& P, int num) {
	P.number-= num;
}

