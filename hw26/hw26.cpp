#include <iostream>
#include "products.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	product p1 = { "Milk", 50, 70 };
	printProd(p1);
	cout << endl;
	cout<<"��������� ���������� ������� = "<<fullPrice(p1)<< endl;
	cout << "������� ���-�� ������� ��� ������ -> ";
	cin >> n;
	sell(p1, n);
	cout << "��������� ���������� ������� = " << fullPrice(p1) << endl;



	return 0;
}