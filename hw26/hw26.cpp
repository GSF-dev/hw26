#include <iostream>
#include "products.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	product p1 = { "Milk", 50, 70 };
	printProd(p1);
	cout << endl;
	cout<<"Стоимость оставшихся товаров = "<<fullPrice(p1)<< endl;
	cout << "Введите кол-во товаров для вычета -> ";
	cin >> n;
	sell(p1, n);
	cout << "Стоимость оставшихся товаров = " << fullPrice(p1) << endl;



	return 0;
}