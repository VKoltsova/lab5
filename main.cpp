#include "Factory.h"
#include "GunFactory.h"
#include "ButterFactory.h"
#include "FridgeFactory.h"
#include "Utils.h"

#include <stdlib.h>
#include <iostream>
using namespace std;

#define MIN_WORKERS_COUNT 1
#define MAX_WORKERS_COUNT 10000
#define MIN_WORKERS_EFFICIENCY 0.5
#define MAX_WORKERS_EFFICIENCY 5.0

#define MIN_GUN_CALIBER 0.1
#define MAX_GUN_CALIBER 100.0
#define MIN_GUN_AMMO_CAPACITY 1
#define MAX_GUN_AMMO_CAPACITY 500

#define MIN_BUTTER_FAT_CONTENT 40
#define MAX_BUTTER_FAT_CONTENT 95
#define MIN_BUTTER_SHELF_LIFE 10	//срок годности
#define MAX_BUTTER_SHELF_LIFE 180

#define MIN_FRIDGE_WORKING_TEMPERATURE -10
#define MAX_FRIDGE_WORKING_TEMPERATURE 10
#define MIN_FRIDGE_NUM_OF_RACKS 2
#define MAX_FRIDGE_NUM_OF_RACKS 10

int main() {

	setlocale(LC_ALL, "Russian");

	Utils* util = new Utils();
	// дл€ 4 лабы

	/*cout << "1) ¬ведите название завода" << endl;
	string factoryName = util->inputString();

	cout << "2) ¬ведите количество работников завода" << endl;
	int workersCount = util->inputInteger(MIN_WORKERS_COUNT, MAX_WORKERS_COUNT);
	
	cout << "3) ¬ведите ежедневную эффективность рабочего (в кол-ве производимых продуктов)" << endl;
	double workerEfficiency = util->inputDouble(MIN_WORKERS_EFFICIENCY, MAX_WORKERS_EFFICIENCY);

	Factory* factory = new Factory(&factoryName, workersCount, workerEfficiency);

	cout << endl;
	factory->print();
	cout << *(factory->getName()) << " ежедневна€ производительность составл€ет " << factory->getFactoryOutput() << " единиц продукции ";
	cout << endl;

	cout << "Enter any key to continue...";
	cin.get();

	system("cls");*/

	cout << "1) ¬ведите название завода оружи€" << endl;
	string factoryName = util->inputString();

	cout << "2) ¬ведите количество работников завода оружи€" << endl;
	int workersCount = util->inputInteger(MIN_WORKERS_COUNT, MAX_WORKERS_COUNT);

	cout << "3) ¬ведите ежедневную эффективность рабочего (сколько в 1 день он изготавливает пистолетов)" << endl;
	double workerEfficiency = util->inputDouble(MIN_WORKERS_EFFICIENCY, MAX_WORKERS_EFFICIENCY);

	cout << "4) ¬ведите калибр оружи€" << endl;
	double gunCaliber = util->inputDouble(MIN_GUN_CALIBER, MAX_GUN_CALIBER);

	cout << "5) ¬ведите кол-во патронов" << endl;
	int gunAmmoCapacity = util->inputInteger(MIN_GUN_AMMO_CAPACITY, MAX_GUN_AMMO_CAPACITY);

	Factory* gunFactory = new GunFactory(&factoryName, workersCount, workerEfficiency, gunCaliber, gunAmmoCapacity);

	cout << endl;
	gunFactory->print();
	cout << *(gunFactory->getName()) << " ежедневна€ производительность составл€ет: " << gunFactory->getFactoryOutput() << " оружи€";
	cout << endl;

	cout << "Enter any key to continue..." << endl;
	cin.get();

	gunFactory->produce();

	cout << "Enter any key to continue..." << endl;
	cin.get();

	system("cls");

	cout << "1) ¬ведите название завода масла" << endl;
	factoryName = util->inputString();

	cout << "2) ¬ведите количество работников завода масла" << endl;
	workersCount = util->inputInteger(MIN_WORKERS_COUNT, MAX_WORKERS_COUNT);

	cout << "3) ¬ведите ежедневную эффективность рабочего (сколько в 1 день он изготавливает пачек масла)" << endl;
	workerEfficiency = util->inputDouble(MIN_WORKERS_EFFICIENCY, MAX_WORKERS_EFFICIENCY);

	cout << "4) ¬ведите жирность производимого масла" << endl;
	int butterFatContent = util->inputInteger(MIN_BUTTER_FAT_CONTENT, MAX_BUTTER_FAT_CONTENT);

	cout << "5) ¬вудите срок хранени€ сливочного масла" << endl;
	int butterShelfLife = util->inputInteger(MIN_BUTTER_SHELF_LIFE, MAX_BUTTER_SHELF_LIFE);

	Factory* butterFactory = new ButterFactory(&factoryName, workersCount, workerEfficiency, butterFatContent, butterShelfLife);

	cout << endl;
	butterFactory->print();
	cout << *(butterFactory->getName()) << " ежедневна€ производительность составл€ет: " << butterFactory->getFactoryOutput() << " пакетов масла";
	cout << endl;

	cout << "Enter any key to continue..." << endl;
	cin.get();

	butterFactory->produce();

	cout << "Enter any key to continue..." << endl;
	cin.get();

	system("cls");

	cout << "1) ¬ведите название завода холодильников" << endl;
	factoryName = util->inputString();

	cout << "2) ¬ведите количество работников завода холодильников" << endl;
	workersCount = util->inputInteger(MIN_WORKERS_COUNT, MAX_WORKERS_COUNT);

	cout << "3) ¬ведите ежедневную эффективность рабочего (сколько в 1 день он изготавливает холодильников)" << endl;
	workerEfficiency = util->inputDouble(MIN_WORKERS_EFFICIENCY, MAX_WORKERS_EFFICIENCY);

	cout << "4) ¬ведите температуру работы холодильника" << endl;
	double fridgeWorkingTemperature = util->inputDouble(MIN_FRIDGE_WORKING_TEMPERATURE, MAX_FRIDGE_WORKING_TEMPERATURE);

	cout << "5) ¬ведите количество полок в холодильнике" << endl;
	int fridgeNumOfRacks = util->inputInteger(MIN_FRIDGE_NUM_OF_RACKS, MAX_FRIDGE_NUM_OF_RACKS);

	Factory* fridgeFactory = new FridgeFactory(&factoryName, workersCount, workerEfficiency, fridgeWorkingTemperature, fridgeNumOfRacks);

	cout << endl;
	fridgeFactory->print();
	cout << *(fridgeFactory->getName()) << " ежедневна€ производительность составл€ет: " << fridgeFactory->getFactoryOutput() << " холодильников";
	cout << endl;

	cout << "Enter any key to continue..." << endl;
	cin.get();

	fridgeFactory->produce();

	cout << "Enter any key to continue..." << endl;
	cin.get();

	system("cls");

	//delete factory;
	delete gunFactory;
	delete butterFactory;
	delete fridgeFactory;

	cout << "¬от и все, зачетно?" << endl;

	cout << "Enter any key to continue..." << endl;
	cin.get();

	return 0;
}