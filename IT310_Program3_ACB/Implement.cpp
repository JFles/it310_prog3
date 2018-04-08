//Implementation File Implement.cpp

#include "stdafx.h"
//#include "Inventory.h"


Inventory * FirstRecordPointer;


//Constructors

Inventory::Inventory()
{
	idNumber = 0;
	prodDesc[19] = '\0';
	manifID = 0;
	wholesale = 0;
	markUp = 0;
	countInv = 0;
	NextRecordPointer = NULL;
}

//Inventory::Inventory(int initIDNumber, char initProdDesc[], int initManifID, double initWholesale, double initMarkUP, int initcountInv, Inventory* initLink)
//{
//	idNumber = initIDNumber;
//	strcpy_s(prodDesc, initProdDesc);
//	manifID = initManifID;
//	wholesale = initWholesale;
//	markUp = initMarkUP;
//	countInv = initcountInv;
//}

//Return values of private class members

int Inventory::getIDNumber() const
{
	return (idNumber);
}


char* Inventory::getProdDesc() const
{
	return (prodDesc);
}


int Inventory::getManifID() const
{
	return(manifID);
}


double Inventory::getWholesale() const
{
	return (wholesale);
}

double Inventory::getMarkup() const
{
	return(markUp);
}

int Inventory::getCountInv() const
{
	return(countInv);
}

double Inventory::retailCalculate(double wholesale,double markUp) const
{
	double retailPrice = (markUp * wholesale) + wholesale;

	return(retailPrice);
}

Inventory* Inventory::GetLink() const
{
	return NextRecordPointer;
}

//Output Function
void Inventory::ListRecords(char * ReportName)
{
	std::ofstream OutputFile;
	Inventory * CurrentRecordPointer;


	char Separator[60] = "===========================================================";

	OutputFile.open((char*) (void*)Marshal::StringToHGlobalAnsi
					(String::Concat(Directory::GetCurrentDirectory(),
					"\\InventoryFileForOutput.txt")));

	if (!OutputFile)
	{
		Application::Exit();
		return;
	}


	//Display header for Inventory information

	OutputFile << std::endl << std::setw(120)<<Separator << std::endl <<std::endl;
	OutputFile << std::setw(120) << std::setfill(' ') << ReportName << std::endl;
	OutputFile <<std::setw(120)<< Separator;
	OutputFile << std::endl << std::endl << std::setw(25) << std::setfill(' ') << "Identification Number";
	OutputFile << std::setw(25) << std::setfill(' ') << "Description";
	OutputFile << std::setw(25) << std::setfill(' ') << "Manufacturer";
	OutputFile << std::setw(25) << std::setfill(' ') << "Wholesale Price";
	OutputFile << std::setw(25) << std::setfill(' ') << "Mark-Up Percentage";
	OutputFile << std::setw(25) << std::setfill(' ') << "Quantity in Stock";
	OutputFile << "Office Supply Product Retail Price $ "<<std::endl;
	OutputFile << Separator << std::endl << std::endl;
	OutputFile << std::endl << Separator << std::endl << Separator << std::endl;

	//Records are listed until the NULL value is encountered

	CurrentRecordPointer = FirstRecordPointer;
	while (CurrentRecordPointer != NULL)
	{
		OutputFile << std::endl;
		OutputFile << std::right;
		OutputFile << std::endl << std::setw(9) << std::setfill(' ')
			<< CurrentRecordPointer->getIDNumber();
		OutputFile << std::setw(25) << std::setfill(' ')
			<< CurrentRecordPointer->getProdDesc();
		OutputFile << std::setw(20) << std::setfill(' ')
			<< CurrentRecordPointer->getManifID();
		OutputFile << std::setw(15) << std::setfill(' ') << std::fixed << std::setprecision(2)
			<< CurrentRecordPointer->getWholesale();
		OutputFile << std::setw(15) << std::setfill(' ') << std::fixed << std::setprecision(2)
			<< CurrentRecordPointer->getMarkup();
		OutputFile << std::setprecision(2) << std::fixed << "$"<<retailCalculate(wholesale, markUp);
		CurrentRecordPointer = CurrentRecordPointer->GetLink();


	}
	OutputFile << std::endl << Separator << std::endl << Separator << std::endl;
	OutputFile.close();
	return;
} 


//Add an Item to the Linked List

void Inventory::InsertItem(int initIDNumber, char initProdDesc[], int initManifID, double initWholesale, double initMarkUP, int initcountInv, Inventory * CurrentRecordPointer)
{
	Inventory* CurrentPointer; //traverse the list
	Inventory* TrailPointer; //Previous Record
	bool Found;

	idNumber = initIDNumber;
	strcpy_s(prodDesc, initProdDesc);
	manifID = initManifID;
	wholesale = initWholesale;
	markUp = initMarkUP;
	countInv = initcountInv;

	//Case 1: Empty List
	if (FirstRecordPointer == NULL)
	{
		FirstRecordPointer = CurrentRecordPointer;
	}

	else
	{
		CurrentPointer = FirstRecordPointer;
		Found = false;

		//search the linked list

		while (CurrentPointer != NULL && !Found)
		{
			if (CurrentPointer->idNumber >= initIDNumber)
			{
				Found = true;
			}
			else
			{
				TrailPointer = CurrentPointer;
				CurrentPointer = CurrentPointer->GetLink();


			}

		}

		//Case 2: New Item is smaller than smallest item in list. New Item goes to top of list and head pointer is adjusted

		if (CurrentPointer = FirstRecordPointer)
		{
			NextRecordPointer = FirstRecordPointer;
			FirstRecordPointer = CurrentRecordPointer;
		}

		//Case 3: New item is to be inserted within the list 

		else
		{
			TrailPointer->NextRecordPointer = CurrentRecordPointer;
			NextRecordPointer = CurrentPointer;
		}


	}
}

//Count and Display the Number of items in the linked list

int Inventory::CountItems()
{
	Inventory* CurrentRecordPointer;
	int ItemCounter = 0;

	for (CurrentRecordPointer = FirstRecordPointer;
		CurrentRecordPointer != NULL;
		CurrentRecordPointer = CurrentRecordPointer->GetLink())
	{
		ItemCounter++;
	}
	return(ItemCounter);
}


//Set the value of the private members

void Inventory::SetIDNumber(int initIDNumber)
{
	idNumber = initIDNumber;
};


void Inventory::SetProdDesc(char initProdDesc[])
{
	strcpy_s(prodDesc, initProdDesc);
}

void Inventory::SetManifID(int initManifID)
{
	manifID = initManifID;
}

void Inventory::SetWholesale(double initWholesale)
{
	wholesale = initWholesale;
}


void Inventory::SetMarkup(double initMarkUP)
{
	markUp = initMarkUP;
}


void Inventory::SetCountInv(int initcountInv)
{
	countInv = initcountInv;
}


void Inventory::SetLink(Inventory* initLink)
{
	NextRecordPointer = initLink;
}



