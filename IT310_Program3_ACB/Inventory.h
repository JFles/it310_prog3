//Specification File (Inventory.h)
#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <iomanip>
#include <fstream>

//using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

class Inventory
{
private:
	int idNumber;
	mutable char prodDesc[20];
	int manifID;
	double wholesale;
	double markUp;
	int countInv;
	Inventory* NextRecordPointer;
public:
	//constructors
	
	Inventory();
	/*Inventory(int,char[],int,double,double,int,Inventory*);*/

	//Return Values
	int getIDNumber () const;
	char* getProdDesc() const;
	int getManifID() const;
	double getWholesale() const;
	double getMarkup() const;
	int getCountInv() const;
	Inventory* GetLink() const;


	//Calculate Retail Price

	double retailCalculate(double,double) const;

	//Create Report that Displays Content of Linked List
	void ListRecords(char *);

	//Add an item to the linked list

	void InsertItem(int, char[], int, double, double, int, Inventory*);

	//Count and display the number of items in the linked list

	int CountItems();

	//Set the value of the private members

	void SetIDNumber(int);
	void SetProdDesc(char[]);
	void SetManifID(int);
	void SetWholesale(double);
	void SetMarkup(double);
	void SetCountInv(int);
	void SetLink(Inventory*);


};

#endif