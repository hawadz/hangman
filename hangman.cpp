#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct hangman {

	int lives;
	char arr[12] = "hello world"; // guess this WORD!
	int length = strlen(arr); // out = 11
	char input;
	char arr2[12];
	
};

int main() {
	
	hangman hm;

	hm.lives = 6; // 6 kesempatan
	//char arr2[sizeof(hm.arr)]; 
	// output = 12
	system("cls");

	cout << "  +---+ " << endl;
	cout << "  |   | " << endl;
	cout << "      | " << endl;
	cout << "      | " << endl;
	cout << "      | " << endl;
	cout << "      | " << endl;
	cout << " ========= " << endl;

	for (int i = 0; i < hm.length; i++) { // REPLICATES ARR INTO ARR2
		// mengisi arr2 dengan "-" atau " "
		// hello world
		if (hm.arr[i] != ' ') {
			cout << "-";
			hm.arr2[i] = '-';
		}
		else {
			hm.arr2[i] = ' ';
			cout << " ";
		}
		//|h|e|l|l|o| |w|o|r|l|d|
		// 0 1 2 3 4 5 6 7 8 9 10
		// arr1 = "hello world" = 10 huruf
		// arr2 = "hell- ---l-" totalStrip =  
		// input = d
		// i = 0 (d != h)
		// i = 1 (d != e)
		// i = 2 (d != l)
		// ....
		// i = 10 (d == d)
	}

	cout << endl << "Lives : " << hm.lives;
	cout << endl << "Input char : ";
	cin >> hm.input;

	system("cls");
	
	// LOOOOOP LOOOOP LOOOOP LOOOP LOOOOP LOOOP LOOOP LOOOP LOOP
	while (hm.lives > 0) { // main

		int totalStrip = 0, found = 0;

		// INPUT CORRECT CHARACTERS WHEN GUESSED RIGHT
		for (int i = 0; i < hm.length; i++) {
			if (hm.input == hm.arr[i]) {
				hm.arr2[i] = hm.input;
				found = 1; 
			}
		}

		if (found == 0) // IMPORTANT STUFF LIKE CHECKING THE CONDITIONS
			hm.lives--;

		if (hm.lives == 6) // display
		{
			cout << "  +---+ " << endl;
			cout << "  |   | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << " ========= " << endl;
		}
		else if (hm.lives == 5)
		{
			cout << "  +---+ " << endl;
			cout << "  |   | " << endl;
			cout << "  O   | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << " ========= " << endl;
		}
		else if (hm.lives == 4)
		{
			cout << "  +---+ " << endl;
			cout << "  |   | " << endl;
			cout << "  O   | " << endl;
			cout << "  |   | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << " ========= " << endl;
		}
		else if (hm.lives == 3)
		{
			cout << "  +---+ " << endl;
			cout << "  |   | " << endl;
			cout << "  O   | " << endl;
			cout << " /|   | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << " ========= " << endl;
		}
		else if (hm.lives == 2)
		{
			cout << "  +---+ " << endl;
			cout << "  |   | " << endl;
			cout << "  O   | " << endl;
			cout << " /|\\  | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << " ========= " << endl;
		}
		else if (hm.lives == 1)
		{
			cout << "  +---+ " << endl;
			cout << "  |   | " << endl;
			cout << "  O   | " << endl;
			cout << " /|\\  | " << endl;
			cout << " /    | " << endl;
			cout << "      | " << endl;
			cout << " ========= " << endl;
		}
		else if (hm.lives == 0)
		{
			cout << "  +---+ " << endl;
			cout << "  |   | " << endl;
			cout << "  O   | " << endl;
			cout << " /|\\  | " << endl;
			cout << " / \\  | " << endl;
			cout << "      | " << endl;
			cout << " ========= " << endl;
		}
		
		for (int i = 0; i < hm.length; i++) {
			// periksa jumlah "-"
			if (hm.arr2[i] == '-')
				totalStrip++;
		}

		if (totalStrip == 0 || hm.lives == 0) { // ENDING CONDITIONS
			break; // menghentikan loop
			system("cls");
		}

		for (int i = 0; i < hm.length; i++) { // PRINTS NEXT INPUT CHOICE
			// ganti strip ke huruf
			if (hm.arr2[i] == '-') {
				cout << "-";
			}
			else {
				cout << hm.arr2[i];
			}
		}
		cout << endl << "Lives : " << hm.lives;
		cout << endl << "Input char : ";
		cin >> hm.input;

		system("cls");
	}

	if (hm.lives == 0) {
		cout << "GAME OVER! You didn't guess correctly!" << endl << hm.arr;
	}
	else {
		cout << "YOU WIN! You guessed correctly!" << endl << hm.arr;
	}
}
