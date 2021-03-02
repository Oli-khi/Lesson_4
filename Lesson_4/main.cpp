#include <iostream>
using namespace std;

int main() {

	//		1. �������� ���������, ����������� ��� ����� ���� ����� ����� � �������� �� 10 �� 20 (������������), ���� �� � ������� true, � ��������� ������ � false;

	int a = 4, b = 6;

	if (10 <= a + b <= 20) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	//		2. �������� ���������, �����������, �������� �� ��������� ����� - ����������� �������.������� ����� - ��� �����, ������� ������� ��� ������� ������ �� ������� � ���� ����.

	int prime;
	int count = 0;

	if (prime > 1) {
		for (int i = 2; i < prime; i++) {
			if (prime % i == 0) {
				count++;
				cout << "No, its not!" << endl;
				break;
			}
		}
		if (count == 0) {
			cout << "This is prime number!" << endl;
		}
	}
	else {
			cout << "wrong number!" << endl;
	}
	

	//		3. �������� ���������, ��������� �� ����� �������, ���� ��� ������������� ���������, ����������� � � ������ ���� ����� ������ ���� �� ����, ���� �� ����� ����� ������.

	int first_const, second_const;

	if ((first_const == 10) || (second_const == 10) || (first_const + second_const == 10)) {
		cout << "true";
	}
	else {
		cout << "false";
	}

	//		4.* �������� ���������, ������� ���������� �������� �� ��� ����������.������ 4 - � ��� �������� ����������, ����� ������� 100 - ��, ��� ���� ������ 400 - � � ����������.
	//		    ��� �������� ������ ������� ���������� ������ ��������� � �������

	int year;

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
		cout << year << " year is leap" << endl;
	}
	else {
		cout << year << " year is not leap" << endl;
	}
}