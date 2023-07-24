#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNumber();
int playerGuessNumber();
void answer(int randomNumber, int playerGuessNumber);
void playGuessIt();
bool playAgain();

int main(){
	do {
		playGuessIt();
		
	}while (playAgain());
	return 0;

}

int randomNumber(){
	srand(time(0));
	return rand() % 100 + 1;
//	return 20;
}

int playerGuessNumber(){
	int guess;
	cout << "enter your number: "<<endl;
	cin >> guess;
	return guess;
}

void answer(int randomNumber, int playerGuessNumber){
	if (randomNumber == playerGuessNumber) cout<<"you win"<<endl;
	else if (randomNumber < playerGuessNumber) cout<<"too big"<<endl;
	else cout<< "too small"<<endl;
}

void playGuessIt(){
	int random = randomNumber();
	int number;
	do {
		number = playerGuessNumber();
		answer(random, number);
	} while (number!= random);
}

bool playAgain(){
	char ans;
	cout <<"DO YOU WANT TO PLAY AGAIN (y/n)?"<<endl;
	cin >> ans;
	if (ans == 'y') return true;
	return false;
}


