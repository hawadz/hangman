#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
	system("cls");

	int lives = 6;
	char arr[] = "hello world"; // guess this WORD!
	int length = strlen(arr);

	char arr2[length]; //input
	char input;

		cout<<"  +---+ " << endl;
		cout<<"  |   | " << endl;
		cout<<"      | " << endl;
		cout<<"      | " << endl;
		cout<<"      | " << endl;
		cout<<"      | " << endl;
		cout<<" ========= " << endl;

	for(int i = 0; i < length; i++) { // REPLICATES ARR INTO ARR2
		if(arr[i] != ' ') {
			cout << "-";
			arr2[i] = '-';
		} else {
			arr2[i] = ' ';
			cout << " ";
		}
	}

	cout << endl << "Lives : " << lives;
	cout << endl << "Input char : "; 
	cin >> input; 

	system("cls");

	while(lives > 0) { // main

		int cnt = 0, found = 0;

		// INPUT CORRECT CHARACTERS WHEN GUESSED RIGHT
		for(int i = 0; i < length; i++) { 
			if(input == arr[i]) { 
				arr2[i] = input; 
				found = 1;
			} 
		}

		if(found == 0) // IMPORTANT STUFF LIKE CHECKING THE CONDITIONS
			lives--;

		 if(lives ==6)
 	 {
	 		cout<<"  +---+ " << endl;
	    	cout<<"  |   | " << endl;
    		cout<<"      | " << endl;
	    	cout<<"      | " << endl;
	    	cout<<"      | " << endl;
    		cout<<"      | " << endl;
    		cout<<" ========= " << endl;
  	}
  		else if(lives==5)
  	{
    		cout<<"  +---+ " << endl;
    		cout<<"  |   | " << endl;
    		cout<<"  O   | " << endl;
    		cout<<"      | " << endl;
    		cout<<"      | " << endl;
    		cout<<"      | " << endl;
    		cout<<" ========= " << endl;
  	}
  		else if(lives==4)
  	{
    		cout<<"  +---+ " << endl;
    		cout<<"  |   | " << endl;
    		cout<<"  O   | " << endl;
    		cout<<"  |   | " << endl;
    		cout<<"      | " << endl;
    		cout<<"      | " << endl;
  	  		cout<<" ========= " << endl;
  	}
  		else if(lives==3)
 	{
    		cout<<"  +---+ " << endl;
    		cout<<"  |   | " << endl;
    		cout<<"  O   | " << endl;
    		cout<<" /|   | " << endl;
    		cout<<"      | " << endl;
    		cout<<"      | " << endl;
    		cout<<" ========= " << endl;
  	}
  		else if(lives==2)
  	{
    		cout<<"  +---+ " << endl;
    		cout<<"  |   | " << endl;
    		cout<<"  O   | " << endl;
    		cout<<" /|\\  | " << endl;
    		cout<<"      | " << endl;
    		cout<<"      | " << endl;
    		cout<<" ========= " << endl;
  	}
  		else if(lives==1)
  	{
    		cout<<"  +---+ " << endl;
    		cout<<"  |   | " << endl;
    		cout<<"  O   | " << endl;
    		cout<<" /|\\  | " << endl;
    		cout<<" /    | " << endl;
    		cout<<"      | " << endl;
    		cout<<" ========= " << endl;
  	}
  		else if(lives==0)
  	{
    		cout<<"  +---+ " << endl;
    		cout<<"  |   | " << endl;
    		cout<<"  O   | " << endl;
    		cout<<" /|\\  | " << endl;
    		cout<<" / \\  | " << endl;
    		cout<<"      | " << endl;
    		cout<<" ========= " << endl;
  	}
		for(int i = 0; i < length; i++) { 
			if(arr2[i] == '-')
				cnt++;
		}

		if(cnt == 0 || lives == 0) { // ENDING CONDITIONS
			break;
			system("cls");
		}

		for(int i = 0; i < length; i++) { // PRINTS NEXT INPUT CHOICE
			if(arr2[i] == '-') {
				cout << "-"; 
			} else{
				cout << arr2[i];
			}
		}
		cout << endl << "Lives : " << lives;
		cout << endl << "Input char : "; 
		cin >> input; 

		system("cls");
	}

	if(lives == 0) {
		cout << "GAME OVER! You didn't guess correctly!" << endl << arr;
	} else {
		cout << "YOU WIN! You guessed correctly!" << endl << arr;
	}
}
