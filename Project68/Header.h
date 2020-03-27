#pragma once

#include<iostream>

using namespace std;

struct workman {

	string name;
	string surname;
	int age;
	int ID;
	string firstletter;
};

void addworkman();
void redagworkman();
void showworkman();
void searchage();
void searchsurname();
void deletworkman();
void searchworkmanfirstletter();
void writetofile();
int deleteworkmans();