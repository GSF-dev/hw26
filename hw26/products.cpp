#include "products.h"

void printProd(product& P) {
	std::cout << "Название: " << P.name << std::endl;
	std::cout << "Кол-во товара: " << P.number << std::endl;
	std::cout << "Цена за ед.: " << P.price << std::endl;
}
int fullPrice(product& P) {
	return P.number * P.price;
}
void sell(product& P, int num) {
	P.number-= num;
}

