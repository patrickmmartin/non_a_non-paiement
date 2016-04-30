//============================================================================
// Name        : examples.cpp
// Author      : Patrick
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void oops1(int condition, string& output) {
	switch (condition) {

	case 1:
		output = "1";
		break;
	case 2:
		output = "2";
		break;
	case 3:
		output = "3";
		break;
		defaut: output = "I have no clue";

	}

}

void oops2(int condition, string& output) {
	output = "";
	switch (condition) {

	case 1:
		output = "1";
		break;
	case 2:
		output = "2";
		break;
	case 3:
		output = "3";
		break;
		defaut: output = "I have no clue";

	}

}

void oops3(int condition, string& output) {
	switch (condition) {

	case 1:
		output = "1";
		break;
	case 2:
		output = "2";
		break;
	case 3:
		output = "3";
		break;
	default:
		output = "I have no clue";

	}

}

string oops4(int condition) {
	switch (condition) {

	case 1:
		return "1";
	case 2:
		return "2";
	case 3:
		return "3";
	defaut:
		return "I have no clue";

	}

}

string oops5(int condition) {
	switch (condition) {

	case 1:
		return "1";
	case 2:
		return "2";
	case 3:
		return "3";
	defaut:
		return "I have no clue";

	}

  return "";
}

string oops6(int condition) {
	switch (condition) {

	case 1:
		return "1";
	case 2:
		return "2";
	case 3:
		return "3";
	default:
		return "I have no clue";


	}

}

void outoutdamstring(const string& output) {
	cout << "'" << output << "'\n";
}

int main() {
	string output;

	int switches[] = { 1, 2, 3, 4 };

//	for (int i : switches) {
//		oops1(i, output);
//		outoutdamstring(output);
//	}
//
//	for (int i : switches) {
//		oops2(i, output);
//		outoutdamstring(output);
//	}
//
//	for (int i : switches) {
//		oops3(i, output);
//		outoutdamstring(output);
//	}

	for (int i : switches) {
		outoutdamstring(oops4(i));
	}

	for (int i : switches) {
		outoutdamstring(oops5(i));
	}

	for (int i : switches) {
		outoutdamstring(oops6(i));
	}

	return 0;
}
