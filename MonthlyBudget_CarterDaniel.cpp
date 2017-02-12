#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>


using namespace std;
class SpentItemType {
private:
	double amount;
public:
	string SpentItemTypeId;
	string SpentItemName;
	SpentItemType()
	{
		SpentItemTypeId = "No_Id";
		SpentItemName = "No_Name";
		amount = 0;
	}

	void SetSpentItemInformation(string id, string n, int a) {
		SpentItemTypeId = id;
		SpentItemName = n;
		amount = a;
		if (amount > 0) {
			cout << "Please enter an amount greater than 0: ";
			cin >> amount;
		}
	}
	string GetSpentItemTypeID() {
		return SpentItemTypeId;
	}
	string GetSpentItemTypeName() {
		return SpentItemName;
	}

	double GetSpentItemTypeAmount() {
		return amount;
	}
};
class BudgetItems :public SpentItemType {
private:
	//double BudgetItemAmount; //ask about how to use it else where if private may not be able to though!
public:
	double BudgetItemAmount;
	string itemId;
	string BudgetItemName;
	BudgetItems() :SpentItemType() {
		BudgetItemAmount = 0.0;
		itemId = "No ID";
		BudgetItemName = "No Name";
	}
	void SetBudgetItemInformation(string id, string n, int a) {
		BudgetItemAmount = a;
		itemId = id;
		BudgetItemName = n;
		if (BudgetItemAmount > 0) {
			cout << "Please enter an amount greater than 0: ";
			cin >> BudgetItemAmount;
		}
	}
	string GetBudgetItemID(string itemId) {
		return itemId;
	}
	string GetBudgetItemName() {
		return BudgetItemName;
	}
	double GetBudgetItemAmount() {
		return BudgetItemAmount;

	}
	virtual void PrintInformation() {
	}
};
class Housing :public BudgetItems {
private:
	string itemId;
	int NumberofItem;
	SpentItemType itemName[10];
	double amount;
public:

	double *cost;

	double total_Amount;

	Housing() : BudgetItems() { 
	BudgetItemAmount = 0.0;
		itemId = "No ID";
		amount = 0.0;
	}
	void setInformation(string H, int a, int b, double c,double e, SpentItemType Housing) {
		itemId = H;
		SpentItemType itemName[10]= {Housing};
		amount = a;
		total_Amount = c;
		NumberofItem = b;
		*cost = e;

	}
	void PrintInformation() {
		cout << "Housing item ID is ";
		cin >> itemId;
		cout << "Housing Budget Amount is ";
		cin >> BudgetItemAmount;
		cout << endl;
		cout << NumberofItem;
		cout << "The total of all the items purchased is " << total_Amount << endl;
		cout << "The amount left in the Housing budget is" << setprecision(2) << fixed << amount << endl;

	}
	void AddNewSpentItem() { // how to add new item to spent type
		
		cout << "Please eneter the budget item ID: " << itemId << endl;
		cout << "Please enter the budget item name: " << itemName << endl;
		cout << "Please enter the budget amount: " << amount << endl;


	}
	int getNumberofItem() {

		return  NumberofItem;
	}

	double getTotalSpentAmount() {
		for (int i = 0; 10; i++)
			total_Amount += cost[i];

		return total_Amount;
	}

};
class Utilities : public BudgetItems {
private:
	string itemId;
	int NumberofItem;
	SpentItemType itemName[10];
	double amount;
public:

	double *cost;

	double total_Amount;

	Utilities() : BudgetItems() {
	BudgetItemAmount = 0.0;
		itemId = "No ID";
		amount = 0.0;
	}
	void setInformation(string U, int a, double b, int c,double e, SpentItemType Utilities) {
		itemId = U;
		SpentItemType itemName[10] = {Utilities};
		amount = a;
		total_Amount = b;
		NumberofItem = c;
		*cost = e;

	}
	void PrintInformation() {
		cout << "Utilities item ID is ";
		cout << itemId;
		cout << "Utilities Budget Amount is ";
		cout << BudgetItemAmount;
		cout << endl;
		cout << NumberofItem;
		cout << "The total of all the items purchased is " << total_Amount << endl;
		cout << "The amount left in the Utilities budget is" << setprecision(2) << fixed << amount << endl;

	}
	void AddNewSpentItem() { // how to add new item to spent type
		cout << "Please enter a new item";
		cin >> itemId;
		cout << "Please eneter the budget item ID: " << itemId << endl;
		cout << "Please enter the budget item name: " << itemName << endl;
		cout << "Please enter the budget amount: " << amount << endl;


	}
	int getNumberofItem() {

		return  NumberofItem;
	}

	double getTotalSpentAmount() {
		for (int i = 0; 10; i++)
			total_Amount += cost[i];

		return total_Amount;
	}


};
class Food :public BudgetItems {
private:
	string itemId;
	int NumberofItem;
	SpentItemType itemName[10];
	double amount;
public:

	double *cost;

	double total_Amount;

	Food() : BudgetItems() { }

	void setInformation(string F, int a, double b, int c,double e, SpentItemType Food) {
		itemId = F;
		SpentItemType itemName[10] = {Food};
		amount = a;
		total_Amount = b;
		NumberofItem =c;
		*cost = e;

	}
	void PrintInformation() {
		cout << "Food item ID is ";
		cin >> itemId;
		cout << "Food Budget Amount is ";
		cin >> BudgetItemAmount;
		cout << endl;
		cout << NumberofItem;
		cout << "The total of all the items purchased is " << total_Amount << endl;
		cout << "The amount left in the Food budget is" << setprecision(2) << fixed << amount << endl;

	}
	void AddNewSpentItem() { // how to add new item to spent type
		
		cout << "Please eneter the budget item ID: " << itemId << endl;
		cout << "Please enter the budget item name: " << itemName << endl;
		cout << "Please enter the budget amount: " << amount << endl;


	}
	int getNumberofItem() {

		return  NumberofItem;
	}

	double getTotalSpentAmount() {
		for (int i = 0; 10; i++)
			total_Amount += cost[i];

		return total_Amount;
	}
};
class Fast_Food :public Food {
public:
	SpentItemType itemName[10];
	double amount;
	string Id;
	Fast_Food() :Food() {
		SpentItemType itemName[10];
		amount = 0.0;
		Id = "FF";
	}
	void SetInformation(string FF, SpentItemType Fast_Food, double a) {
		SpentItemType itemName[10] = {Fast_Food};
		amount = a;
		Id = FF;
		
	}
};
class Groceries : public Food {
public:
	SpentItemType itemName[10];
	double amount;
	string Id;
	Groceries() :Food() {
		SpentItemType itemName[10];
		amount = 0.0;
		Id = "G";

	}

	void SetInformation(string G, SpentItemType Groceries, double a){
	SpentItemType itemName[10] = {Groceries};
		amount = a;
		Id = G;
	
	}
};


int main() {

	char choice;
	BudgetItems bi;
	Housing H;
	Utilities U;
	Food F;
	string itemId;
	cout << "***************************************\n";
	cout << " 1.  Load Budget & Spent Items data \n";
	cout << " 2.  Add Budget Item \n";
	cout << " 3.  Print Budget Report \n";
	cout << " 4.  Save Budget & Spent Information \n";
	cout << " 5.  Exit Budget \n";
	cout << "***************************************\n";
	cout << "enter choice: ";
	cin >> choice;

	if (choice == '1') // <- change to if else statment
	{

		bi.GetBudgetItemID(itemId);

	}
	if (choice == '2') {
		
		string temp;
		cout << "Please enter a new item ";
		cin >> temp;
		if (temp == U.GetBudgetItemID(itemId)) {
			U.AddNewSpentItem();
		}
		else if (temp == H.GetBudgetItemID(itemId)) {
			H.AddNewSpentItem();
		}

		else if (temp == F.GetBudgetItemID(itemId)) {
			F.AddNewSpentItem();
		}
	}
	if (choice == '3') {
		
		bi.PrintInformation();
	}

	if (choice == '4') {
		cout << "\n";
	}
	else if (choice == '5') {
		exit(0);
	}


	system("pause");
	return 0;
}
