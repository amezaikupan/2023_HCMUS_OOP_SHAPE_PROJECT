#include "PrintHandler.h"

void PrintHandler::printShapeList(vector<shared_ptr<IShape>> list)
{
	for (int i = 0; i < list.size(); i++) {
		cout << i + 1 << ". " << list[i]->toString() << ": " << list[i]->data() << endl;
	}
}

void PrintHandler::printShapeListWithData(vector<shared_ptr<IShape>> list)
{
	//Sort the list
	int minID;
	for (int i = 0; i < list.size() - 1; i++) {
		minID = i;
		for (int j = i + 1; j < list.size(); j++) {
			if (list[j]->area() < list[minID]->area()) {
				minID = j;
			}
		}
		shared_ptr<IShape> temp = list[minID];
		list[minID] = list[i];
		list[i] = temp;
	}
	

	cout << endl;
	for (int i = 0; i < list.size(); i++) {
		cout << "| " << i + 1 << " | "
			<< setw(18) << left << list[i]->toString() << " | "
			<< setw(18) << left << list[i]->data() << " | "
			<< "Chu vi = " << setw(8) << fixed << setprecision(1) << list[i]->circumference() << " | "
			<< "Dien tich = " << setw(8) << fixed << setprecision(2) << list[i]->area() << " | " << endl;
	}
}
