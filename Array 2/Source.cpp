#include<iostream>
#include<string>
using namespace std;

int main() {



	const int size = 14;
	string groups[size];
	int action = 0;
	int indexArray = 0;
	int studentNumber = 0;
	string newName;

	do {
		cout << "\tSTUDENTS LIST" << endl;
		cout << "1.Show studenst" << endl;
		cout << "2.Add students" << endl;
		cout << "3.Delete students" << endl;
		cout << "4.Search students" << endl;
		cout << "5.Edit student" << endl;
		cout << "6.Clear console" << endl;
		cout << "7.Exit" << endl;
		cout << endl;
		cout << "Select action->_";
		cin >> action;

		switch (action)
		{
		case 1: {
			cout << "Students list" << endl;
			for (int i = 0; i < size; i++) {

				if (groups[i] == "") {
					cout << i + 1 << ")Empty" << endl;
				}
				else {
					cout << i + 1 << ")" << groups[i] << endl;
				}
				cout << endl;

			}
			break; }

		case 2: {

			if (indexArray > size) {
				cout << "Error:Array is full" << endl;

			}
			else {
				cout << "Enter name for new students->_";
				cin >> groups[indexArray];
				indexArray++;
			}

			break; }

		case 3: {
			cout << "Enter number student for delete - ";
			cin >> studentNumber;
			if (studentNumber < 1 || studentNumber > size) {
				cout << "Error: invalid number!" << endl;
			}
			else if (groups[studentNumber - 1] == "") {
				cout << "Error:Student not found!" << endl;

			}
			else {
				groups[studentNumber - 1] = "Deleted";
			}

			break; }

		case 4: {
			cout << "Enter number student for search - ";
			cin >> studentNumber;
			if (studentNumber < 1 || studentNumber > size) {
				cout << "Error: invalid number!" << endl;
			}
			else if (groups[studentNumber - 1] == "" || groups[studentNumber - 1] == "Delete") {
				cout << "Error:Student not found!" << endl;

			}
			else {
				cout << groups[studentNumber - 1] << endl;
			}
			break; }
		case 5: {
			cout << "Enter number student for edit - ";
			cin >> studentNumber;
			if (studentNumber < 1 || studentNumber > size) {
				cout << "Error: invalid number!" << endl;
			}
			else if (groups[studentNumber - 1] == "") {
				cout << "Error:Student not found!" << endl;

			}
			else {
				cout << "Enter new name: ";
				cin >> newName;
				groups[studentNumber - 1] = newName;
			   
				break;
			}
		case 6: {
			system("cls");
			break; }

		case 7: {
			cout << "Exit" << endl;
			break; }
		default:
			cout << "Error" << endl;

		}



		}


	} while (action != 7);


	system("pause");
	return 0;
}