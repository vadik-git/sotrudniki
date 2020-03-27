#include <iostream>
#include "Header.h"
/*#include <ctime>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <cstdlib>*/
using namespace std;


int main() {


	int a = 0;
	do {
		cout << "1.add workman" << endl;
		cout << "2.show workman " << endl;
		cout << "3.redag workman" << endl;
		cout << "4.search age workman" << endl;
		cout << "5.search surname workman" << endl;
		cout << "6.search first letter surname workman" << endl;
		cout << "7.write to file" << endl;
		cout << "8.delete workman" << endl;
		cout << "9.exit" << endl;
		cin >> a;
		switch (a) {

		case 1:
			addworkman();
			break;
		case 2:
			showworkman();
			break;
		case 3:
			redagworkman();
			break;
		case 4:
			searchage();
			break;
		case 5:
			searchsurname();
			break;
		case 6:
			searchworkmanfirstletter();
			break;
		case 7:
			writetofile();
			break;
		case 8:
			deleteworkmans();
			break;
		case 9:
			return 0;
			break;

		}
	} while (a != 9);
	system("pause");
	return 0;
}