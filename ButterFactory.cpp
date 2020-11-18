#include "ButterFactory.h"
#include <Windows.h>

void ButterFactory::setButterFatContent(int butterFatContent) {
	this->butterFatContent = butterFatContent;
}

void ButterFactory::setButterShelfLife(int butterShelfLife) {
	this->butterShelfLife = butterShelfLife;
}

int ButterFactory::getButterFatContent() {
	return butterFatContent;
}

int ButterFactory::getButterShelfLife() {
	return butterShelfLife;
}

void ButterFactory::print() {
	Factory::print();
	cout << "�������� ���������� �����: " << butterFatContent << endl;
	cout << "���� �������� ���������� �����: " << butterShelfLife << endl;
}

void ButterFactory::produce() {
	cout << "(����� ������ ������������ �����)";

	for (int i = 0; i < 6; i++) {
		Sleep(1000);
		cout << ".";
	}

	cout << endl << "���... ������ ����� ��� ����� ����������� ��������� � �������� � ����� "
		<< butterFatContent << "%-�� ���� � " << butterShelfLife << " ���� ����� ��������." << endl;
}