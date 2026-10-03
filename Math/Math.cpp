#include<iostream>
#include<string>
#include<math.h>
#include <cstdlib>
#include <ctime>
using namespace std;


enum questionLevel { Easy = 1, Med = 2, Hard = 3, Mix = 4 };
enum operationType { Add = 1, Sub = 2, Mul = 3, Div = 4, Mix = 5 };
struct Result {
	short NumberOfquestion = 0;
	questionLevel Questionlevel;
	operationType optyep;
	short numberOftherightAnswer = 0;
	short numberOfthewrongAnswer = 0;

};

int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
questionLevel choisequestionLevel() {
	int numberOfLevel;
	cout << "enter your level question betwent 1 to 4 :1:[Easy] ,2:[Med] ,3:[Hard], 4:[Mix]" << endl;
	cin >> numberOfLevel;
	return (questionLevel)numberOfLevel;


}
operationType choiseoperationtype() {
	int numberOfoperation;
	cout << "enter your operation type betwen 1 to 4: 1:[Add] ,2:[Sub] ,3:[Div], 4:[Mix]" << endl;
	cin >> numberOfoperation;
	return (operationType)numberOfoperation;

}

/*void gneratorRNumber(int howManyquestion, int level, int operation) {
	Result Finale;

	for (int i = 1; i < howManyquestion; i++) {
		int operand1;
		int opearant2;
		int result;
		switch (level) {
		case Easy:
			operand1 = RandomNumber(1, 10);
			opearant2 = RandomNumber(1, 10);
			break;
		case Med:
			operand1 = RandomNumber(20, 40);
			opearant2 = RandomNumber(20, 40);
			break;
		case Hard:
			operand1 = RandomNumber(50, 100);
			opearant2 = RandomNumber(50, 100);
			break;
		case Mix:
			operand1 = RandomNumber(1, 100);
			opearant2 = RandomNumber(1, 100);
			break;
		default:
			cout << "invalid choice" << endl;



		}
		switch (operation) {
		case Add:
			cout << operand1 << endl << "+" << opearant2 << endl << "----------------" << endl << result << endl;
			cin >> result;
			if (result == (operand1 + opearant2)) {
				system("color 2F");
				Finale.numberOftherightAnswer++;
			}
			else {
				system("color 4F");
				Finale.numberOfthewrongAnswer++;
			}
			break;


		case Sub:
			cout << operand1 << endl << "-" << opearant2 << endl << "----------------" << endl << result << endl;
			cin >> result;
			if (result == (operand1 - opearant2)) {
				system("color 2F");
				Finale.numberOftherightAnswer++;
			}
			else {
				system("color 4F");
				Finale.numberOfthewrongAnswer++;
			}
			break;
		case Mul:
			cout << operand1 << endl << "*" << opearant2 << endl << "----------------" << endl << result << endl;
			cin >> result;
			if (result == (operand1 * opearant2)) {

				system("color 2F");
				Finale.numberOftherightAnswer++;
			}

			else {
				system("color 4F");
				Finale.numberOfthewrongAnswer++;
			}

			break;
		case Div:
			cout << operand1 << endl << "/" << opearant2 << endl << "----------------" << endl << result << endl;
			cin >> result;
			if (result == (operand1 / opearant2)) {
				system("color 2F");
				Finale.numberOftherightAnswer++;
			}
			else {
				system("color 4F");
				Finale.numberOfthewrongAnswer++;
			}
			break;
		case Mix:
			if (RandomNumber(1, 4) == 1) {
				cout << operand1 << endl << "+" << opearant2 << endl << "----------------" << endl << result << endl;
				cin >> result;
				if (result == (operand1 + opearant2)) {
					system("color 2F");
					Finale.numberOftherightAnswer++;
				}
				else {
					system("color 4F");
					Finale.numberOfthewrongAnswer++;
				}


			}
			else if (RandomNumber(1, 4) == 2) {
				cout << operand1 << endl << "-" << opearant2 << endl << "----------------" << endl << result << endl;
				cin >> result;
				if (result == (operand1 - opearant2)) {
					system("color 2F");
					Finale.numberOftherightAnswer++;
				}
				else {
					system("color 4F");
					Finale.numberOfthewrongAnswer++;
				}

			}
			else if (RandomNumber(1, 4) == 3) {
				cout << operand1 << endl << "*" << opearant2 << endl << "----------------" << endl << result << endl;
				cin >> result;
				if (result == (operand1 * opearant2)) {
					system("color 2F");
					Finale.numberOftherightAnswer++;
				}
				else {
					system("color 4F");
					Finale.numberOfthewrongAnswer++;
				}



			}
			else if (RandomNumber(1, 4) == 4) {
				cout << operand1 << endl << "*" << opearant2 << endl << "----------------" << endl << result << endl;
				cin >> result;
				if (result == (operand1 / opearant2)) {
					system("color 2F");
					Finale.numberOftherightAnswer++;
				}
				else {
					system("color 4F");
					Finale.numberOfthewrongAnswer++;
				}




			}




		}


	}
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "the right answer" << Finale.numberOftherightAnswer << endl;
	cout << "the wrong answer" << Finale.numberOfthewrongAnswer << endl;
	cout << "-------------------------------------------------------------------------" << endl;

}*/
void generateRandomNumber(int howManyQuestions, int level, int operation) {
	Result Finale;

	for (int i = 1; i <= howManyQuestions; i++) {
		int operand1, operand2, result;

		switch (level) {
		case Easy:
			operand1 = RandomNumber(1, 10);
			operand2 = RandomNumber(1, 10);
			break;
		case Med:
			operand1 = RandomNumber(20, 40);
			operand2 = RandomNumber(20, 40);
			break;
		case Hard:
			operand1 = RandomNumber(50, 100);
			operand2 = RandomNumber(50, 100);
			break;
		case Mix:
			operand1 = RandomNumber(1, 100);
			operand2 = RandomNumber(1, 100);
			break;
		default:
			cout << "Invalid choice" << endl;
		}

		switch (operation) {
		case Add:
			result = operand1 + operand2;
			break;
		case Sub:
			result = operand1 - operand2;
			break;
		case Mul:
			result = operand1 * operand2;
			break;
		case Div:
			result = operand1 / operand2;
			break;
		case Mix:
			int randomOp = RandomNumber(1, 4);
			if (randomOp == 1) {
				result = operand1 + operand2;
			}
			else if (randomOp == 2) {
				result = operand1 - operand2;
			}
			else if (randomOp == 3) {
				result = operand1 * operand2;
			}
			else {
				result = operand1 / operand2;
			}
			break;
		default:
			cout << "Invalid choice" << endl;
		}

		cout << operand1 << " " << ((operation == Div) ? "/" : ((operation == Mul) ? "*" : ((operation == Sub) ? "-" : "+"))) << " " << operand2 << " = ";
		cin >> result;

		if (result == (operand1 + operand2)) {
			system("color 2F");
			Finale.numberOftherightAnswer++;
		}
		else {
			system("color 4F");
			Finale.numberOfthewrongAnswer++;
		}
	}

	cout << "-----------------------------------------------------------" << endl;
	cout << "Number of correct answers: " << Finale.numberOftherightAnswer << endl;
	cout << "Number of wrong answers: " << Finale.numberOfthewrongAnswer << endl;
	cout << "-----------------------------------------------------------" << endl;
}

short numberOfquestion() {
	int numberofQuestion;
	cout << "how many question do you want to answer?:" << endl;
	cin >> numberofQuestion;
	return numberofQuestion;
}

int main() {
	srand((unsigned)time(NULL));
	questionLevel chosenLevel = choisequestionLevel();
	operationType chosenOperation = choiseoperationtype();
	generateRandomNumber(numberOfquestion(), chosenLevel, chosenOperation);




}

