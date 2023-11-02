#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct Car
{
	char marka[30];
	char model[30];
	char color[30];
	int year_of_issue;
	char registration_mark[30];
};

struct Klient
{
	char name[20];
	char surname[20];
	char middle_name[20];
};

struct Contract
{
	char client_name[20];
	char con_registration_mark[30];
	int rental_date;
	int price_oneDay;
};


Car* addCar(Car* car, int& length) {
	Car* cars = new Car[length + 1];

	Car newCar;
	cout << "Enter the make of the car: ";
	cin >> newCar.marka;
	cout << "Enter your car model: ";
	cin >> newCar.model;
	cout << "Enter car color: ";
	cin >> newCar.color;
	cout << "Enter the year of manufacture of the car: ";
	cin >> newCar.year_of_issue;
	cout << "Enter car numebr: ";
	cin >> newCar.registration_mark;


	for (int i = 0; i < length; i++) {
		cars[i] = car[i];
	}


	cars[length] = newCar;
	length++;
	cout << "Car upped" << endl;

	return cars;
}

Car* removeCar(Car* cars, int& length, const char* registration_mark) {
	for (int i = 0; i < length; i++)
	{
		if (strcmp(cars[i].registration_mark, registration_mark) == 0) {
			for (int j = i; j < length - 1; j++)
			{
				cars[j] = cars[j + 1];
			}
			length--;
			cout << "Car removed" << endl;
			return cars;
		}
	}
	cout << "No such car found!" << endl;
	return cars;
}

Klient* removeClient(Klient* clients, int& length, char* name, char surname) {
	for (int i = 0; i < length; i++)
	{
		if(strcmp(clients[i].name, name) == 0 && strcmp))
	}
}

Klient* addClient(Klient* client, int& length) {
	Klient* clients = new Klient[length + 1];

	Klient newClient;
	cout << "Enter the name: ";
	cin >> newClient.name;
	cout << "Enter the surname: ";
	cin >> newClient.surname;
	cout << "Enter the middle name: ";
	cin >> newClient.middle_name;

	for (int i = 0; i < length; i++) {
		clients[i] = client[i];
	}


	clients[length] = newClient;
	length++;
	cout << "Client upped" << endl;

	return clients;
}
Contract* addContract(Contract* contract,int &length, const char* clientName, const char* regNumber, int rentalDate, int pricePerDay) {
	Contract* contracts = new Contract[length + 1];

	Contract newContract;
	strcpy_s(newContract.client_name, clientName);
	strcpy_s(newContract.con_registration_mark, regNumber);
	newContract.rental_date = rentalDate;
	newContract.price_oneDay = pricePerDay;

	for (int i = 0; i < length; i++) {
		contracts[i] = contract[i];
	}

	contract[length] = newContract;
	length++;
	cout << "Contract added" << endl;
	return contracts;
}

void showCar(const Car& cars) {

	cout << "Marka: " << cars.marka << endl;
	cout << "Model: " << cars.model << endl;
	cout << "Color: " << cars.color << endl;
	cout << "Year of issue: " << cars.year_of_issue << endl;
	cout << "Registration number: " << cars.registration_mark << endl;
	cout << endl;
}

void showClient(const Klient& clients) {

	cout << "Name: " << clients.name << endl;
	cout << "Surname: " << clients.surname << endl;
	cout << "Middle name: " << clients.middle_name << endl;
	cout << endl;
}

void searchMarka(const Car* cars, int length, const char* marka) {
	cout << "Cars by brand (" << marka << "):\n" << endl;
	for (int i = 0; i < length; i++) {
		if (strcmp(cars[i].marka, marka) == 0) {
			showCar(cars[i]);
			cout << endl;
		}
		else {
			cout << "There is no such brand!" << endl;
		}
	}
}

void searchColor(const Car* cars, int length, const char* color) {
	cout << "Cars by brand (" << color << "):\n" << endl;
	for (int i = 0; i < length; i++) {
		if (strcmp(cars[i].color, color) == 0) {
			showCar(cars[i]);
			cout << endl;
		}
		else {
			cout << "There is no car with this color!" << endl;
		}
	}
}

void searchRegistrationNumber(const Car* cars, int length, const char* registration_mark) {
	cout << "Car by registration number (" << registration_mark << "):\n" << endl;
	for (int i = 0; i < length; i++) {
		if (strcmp(cars[i].registration_mark, registration_mark) == 0) {
			showCar(cars[i]);
			break;
		}
		else {
			cout << "There is no car with this registration number!" << endl;
		}
	}
}

void searchYearofIssue(const Car* cars, int length, int year_of_issue) {
	cout << "Cars by year of issue (" << year_of_issue << "):\n" << endl;
	for (int i = 0; i < length; i++) {
		if (cars[i].year_of_issue == year_of_issue) {
			showCar(cars[i]);
			cout << endl;
		}
		else {
			cout << "There is no car with this year of manufacture!" << endl;
		}
	}
}

void searchContractByClientName(const Contract* contracts, int length, const char* clientName) {
	cout << "Contracts for client (" << clientName << "):" << endl;
	for (int i = 0; i < length; i++) {
		if (strcmp(contracts[i].client_name, clientName) == 0) {
			cout << "Contract " << i + 1 << ": "
				 << contracts[i].client_name << " " 
				 << contracts[i].con_registration_mark << " "
				 << contracts[i].rental_date << " " 
				 << contracts[i].price_oneDay << endl;
		}
		else
		{
			cout << "This clint doesn't have a contract!" << endl;
		}
	}
}

int main() {
	
	cout << "\t\t.______       _______ .__   __. .___________.     ______      ___      .______       " << endl;
	cout << "\t\t|   _  \\     |   ____||  \\ |  | |           |    /      |    /   \\     |   _  \\     " << endl;
	cout << "\t\t|  |_)  |    |  |__   |   \\|  | `---|  |----`   |  ,----'   /  ^  \\    |  |_)  |    " << endl;
	cout << "\t\t|      /     |   __|  |  . `  |     |  |        |  |       /  /_\\  \\   |      /     " << endl;
	cout << "\t\t|  |\\  \\----.|  |____ |  |\\   |     |  |        |  `----. /  _____  \\  |  |\\  \\----." << endl;
	cout << "\t\t| _| `._____||_______||__| \\__|     |__|         \\______|/__/     \\__\\ | _| `._____|" << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;


	int length = 1, choice{};

	Car* menu = new Car[length];
	Klient* menu_clients = new Klient[length];
	Contract* contracts = new Contract[length];


	menu[0] = { "Bmw", "F30", "White", 2016, "90-UG-555" };
	menu_clients[0] = { "Ruslan", "Nabiyev", "Rasul" };
	cout << "\n";
	while (true)
	{
		cout << "Choice a search operation: \n" << endl;
		cout << "1 - Search by brand\t\t\t||\t5 - Add car\t\t\t||\t11 - To remove car" << endl;
		cout << "2 - Search by color\t\t\t||\t6 - Add client\t\t\t||\t12 - To remove client" << endl;
		cout << "3 - Search by registration number\t||\t7 - Show car info\t\t||\t13 - To remove contract" << endl;
		cout << "4 - Search by year of issue\t\t||\t8 - Show client info" << endl;
		cout << "10 - Search contract by client name\t||\t9 - Add contract\n" << endl;
		cout << "Enter choice: " << endl;
		cin >> choice;
		cout << "________________________________________________________________________________________________________________________" << endl;


		switch (choice)
		{
		case 1: {
			char marka[30];
			cout << "Enter the brand search: ";
			cin >> marka;
			searchMarka(menu, length, marka);
			break;
		}
		case 2: {
			char color[30];
			cout << "Enter the color search: ";
			cin >> color;
			searchColor(menu, length, color);
			break;
		}
		case 3: {
			char regis_number[30];
			cout << "Enter the registration number search: ";
			cin >> regis_number;
			searchRegistrationNumber(menu, length, regis_number);
			break;
		}
		case 4: {
			int year;
			cout << "Enter the year of issue search: ";
			cin >> year;
			searchYearofIssue(menu, length, year);
			break;
		}
		case 5: {
			menu = addCar(menu, length);
			break;
		}
		case 6: {
			menu_clients = addClient(menu_clients, length);
			break;
		}
		case 7: {
			for (int i = 0; i < length; i++)
			{
				cout << "Car " << i + 1 << endl;
				showCar(menu[i]);
				cout << endl;
			}
			break;
		}
		case 8: {
			for (int i = 0; i < length; i++)
			{
				cout << "Client " << i + 1 << endl;
				showClient(menu_clients[i]);
				cout << endl;
			}
			break;
		}
		case 9: {
			char clientName[20];
			char regNumber[30];
			int rentalDate, pricePerDay;
			cout << "Enter client name: ";
			cin >> clientName;
			cout << "Enter car registration number: ";
			cin >> regNumber;
			cout << "Enter rental date: ";
			cin >> rentalDate;
			cout << "Enter price per day: ";
			cin >> pricePerDay;
			addContract(contracts, length, clientName, regNumber, rentalDate, pricePerDay);
			break;
		}
		case 10: {
			char client_name[30];
			cout << "Enter the client name: ";
			cin >> client_name;
			searchContractByClientName(contracts, length, client_name);
			break;
		}
		case 11: {
			char registartion_mark[30];
			cout << "Enter the car registratrion num remove: ";
			cin >> registartion_mark;
			menu = removeCar(menu, length, registartion_mark);
			break;
		}
		default:
			break;
		}

	}
}
