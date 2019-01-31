#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void options();
void total();
void money();
void politics();
void paris();
void dreamworks();
void uber();
void trump();
void obama();
void news();
void search();

void options() {

	int userInput = 0;

	cout << "Please enter a query by its number..." << endl;
	cout << "1: Count the total number of tweets in the data set." << endl;
	cout << "2: Count the number of tweets that mention the word money." << endl;
	cout << "3: Count the number of tweets that mention politics." << endl;
	cout << "4: Print to the screen any tweets mentioning the word Paris." << endl;
	cout << "5: Print to the screen any tweets mentioning the word DreamWorks." << endl;
	cout << "6: Print to the screen any tweets mentioning the word Uber." << endl;
	cout << "7: Print to the screen any tweets mentioning the word Trump." << endl;
	cout << "8: Print to the screen any tweets mentioning the word Obama." << endl;
	cout << "9: Print to the screen any tweets mentioning the word News." << endl;
	cout << "10: Search your own word." << endl;
	cin >> userInput;

	if (userInput == 1) {

		total();

	}

	if (userInput == 2) {

		money();

	}

	if (userInput == 3) {

		politics();

	}

	if (userInput == 4) {

		paris();

	}

	if (userInput == 5) {

		dreamworks();

	}

	if (userInput == 6) {

		uber();

	}

	if (userInput == 7) {

		trump();

	}

	if (userInput == 8) {

		obama();

	}

	if (userInput == 9) {

		news();

	}

	if (userInput == 10) {

		search();

	}

}

void total() {

	int total = 0;
	int loop = 0;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			total++;
		}

		cout << "There are " << total << " lines in the file being read" << endl;
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
			cin >> loop;
			if (loop == 1) {

				options();

			}
			else {
				cout << "Have a nice day." << endl;
			}
		
	}
	else {
		cout << "Error reading file" << endl;
	}

}


void money() {

	int money = 0;
	int loop = 0;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("money") <= myData.length()) {
				money++;
				
			}
		}
		cout << "There are " << money << " lines in the file containing the word Money" << endl;
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
		cin >> loop;
		if (loop == 1) {

			options();

		}
		else {
			cout << "Have a nice day." << endl;
		}
	}
	else {
		cout << "Error reading file" << endl;
	}

}

void politics() {

	int politics = 0;
	int loop = 0;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("politics") <= myData.length()) {
				politics++;
			}
		}

		cout << "There are " << politics << " lines in the file containing the word Politics" << endl;
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
		cin >> loop;
		if (loop == 1) {

			options();

		}
		else {
			cout << "Have a nice day." << endl;
		}
	}
	else {
		cout << "Error reading file" << endl;
	}

}

void paris() {

	int loop = 0;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("paris") <= myData.length()) {
				cout << myData << endl;
			}
		}
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
		cin >> loop;
		if (loop == 1) {

			options();

		}
		else {
			cout << "Have a nice day." << endl;
		}
		
		
	}
	else {
		cout << "Error reading file" << endl;
	}

}

void dreamworks() {

	int loop = 0;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("dreamworks") <= myData.length()) {
				cout << myData << endl;
			}
		}
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
		cin >> loop;
		if (loop == 1) {

			options();

		}
		else {
			cout << "Have a nice day." << endl;
		}
	}
	else {
		cout << "Error reading file" << endl;
	}

}

void uber() {

	int loop = 0;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("money") <= myData.length()) {
				cout << myData << endl;
		}
	}
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
		cin >> loop;
		if (loop == 1) {

			options();

		}
		else {
			cout << "Have a nice day." << endl;
		}
	}
	else {
		cout << "Error reading file" << endl;
	}

}

void trump() {

	int loop = 0;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("trump") <= myData.length()) {
				cout << myData << endl;
			}
		}
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
		cin >> loop;
		if (loop == 1) {

			options();

		}
		else {
			cout << "Have a nice day." << endl;
		}
	}
	else {
		cout << "Error reading file" << endl;
	}

}

void obama() {

	int loop = 0;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("obama") <= myData.length()) {
				cout << myData << endl;
			}
		}
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
		cin >> loop;
		if (loop == 1) {

			options();

		}
		else {
			cout << "Have a nice day." << endl;
		}
	}
	else {
		cout << "Error reading file" << endl;
	}

}

void news() {

	int loop = 0;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("news") <= myData.length()) {
				cout << myData << endl;
			}
		}
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
		cin >> loop;
		if (loop == 1) {

			options();

		}
		else {
			cout << "Have a nice day." << endl;
		}
	}
	else {
		cout << "Error reading file" << endl;
	}

}

void search() {

	int loop = 0;
	string userSearch;
	ifstream inFile;
	string myData;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Reading file please wait..." << endl;
		cout << "Please ender a word you would like to search..." << endl;
		cin >> userSearch;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find(userSearch) <= myData.length()) {
				cout << myData << endl;
			}
		}
		inFile.close();
		cout << "Do you have another query? 1 for yes, 2 to quit." << endl;
		cin >> loop;
		if (loop == 1) {

			options();

		}
		else {
			cout << "Have a nice day." << endl;
		}
	}
	else {
		cout << "Error reading file" << endl;
	}

}

int main() {
	
	options();

	system("pause");
	return 0;

}
