#include "Header.h"
#include<iostream>
#include<list>
#include<string>
#include<fstream>



list <workman> listworkman;



void addworkman()
{
	workman work;
	int quanitu = 0;

	cout << "Enter quanitu workman :-> " << endl;
	cin >> quanitu;
	for (int i = 0; i < quanitu; i++) {
		cout << "Enter surnamename workman :-> " << endl;
		cin >> work.surname;
		cout << "Enter name workman :-> " << endl;
		cin >> work.name;
		cout << "Enter age workman :-> " << endl;
		cin >> work.age;
		cout << "Enter ID workman :-> " << endl;
		cin >> work.ID;
		cout << "Enter first letter surname :->" << endl;
		cin >> work.firstletter;
		listworkman.push_back(work);
	}




}

void redagworkman()
{
	int ID = 0;
	

	for (workman &work : listworkman) {



		cout << "Enter ID workman :-> " << endl;
		cin >> ID ;
		
		if (ID == work.ID) {
			cout << "Enter new surname workman :->" << endl;
			cin >> work.surname;
			cout << "Enter new name workman :->" << endl;
			cin >> work.name;
			cout << "Enter new age workman :->" << endl;
			cin >> work.age;
			cout << "Enter new ID workman :->" << endl;
			cin >> work.ID;
			cout << "Enter new first letter surname :->" << endl;
			cin >> work.firstletter;
				
			
		}
		
	}

		

}

void showworkman()
{
	for (workman work : listworkman) {

		cout << "Surname workman :-> " << work.surname << endl;
		cout << "Name workman :-> " << work.name << endl;
		cout << "Age workman :-> " << work.age<< endl;
		cout << "ID workman :-> "<<work.ID << endl;
	}

}

void searchage()
{
	int age = 0;
	workman work;
	cout << "Enter age workman :->" << endl;
	cin >> age;
	for (workman work : listworkman) {
		if (age == work.age) {

			cout << work.surname << endl;
			cout << work.name << endl;
			cout << work.age << endl;
			cout << work.ID << endl;

		}
		if (age != work.age) {
			cout << "There is no such employee" << endl;
		}
		
	}



}

void searchsurname()
{
	string surname;
	cout << "Enter surname workman :->" << endl;
	cin >> surname;
	for (workman work : listworkman) {
		if (surname == work.surname) {

			cout <<"Surname workman :->"<<work.surname << endl;
			cout <<"Name workman :->"<< work.name << endl;
			cout << "Age workman :-> "<<work.age << endl;
			cout << "ID workman :->"<<work.ID << endl;

		}
		
		if (surname != work.surname) {
			cout << "There is no such employee" << endl;
		}

	}
}

void deletworkman()
{
	
	
}

void searchworkmanfirstletter()
{
	string firstletter;
	cout << "Enter first letter surname workman :->" << endl;
	cin >> firstletter;
	for (workman work : listworkman) {
		if (firstletter == work.firstletter) {
			cout << "Surname workman :->" << work.surname << endl;
			cout << "Name workman :->" << work.name << endl;
			cout << "Age workman :-> " << work.age << endl;
			cout << "ID workman :->" << work.ID << endl;


		}
		if (firstletter != work.firstletter) {
				cout << "There is no such employee" << endl;
		}


	}
}

void writetofile()
{
	
	ofstream fout;
	fout.open("sotrudniki.txt", fstream::app);

	bool isopen = fout.is_open();
	if (isopen == true) {
		cout << "fileopen" << endl;
		for (workman work : listworkman) {
			fout << work.surname << endl;
			fout << work.name << endl;
			fout << work.age << endl;
			fout << work.ID << endl;
		}


	}
	else {
		cout << "file erooor " << endl;
	}

}

int deleteworkmans()
{

	string names;
	cout << "Enter name workman in delete :->" << endl;
	cin >> names;
	for (auto work = listworkman.begin(); work != listworkman.end(); work++) {

		if (work->name == names) {
			listworkman.erase(work);
			break;
		}

	}

	return 0;
}
