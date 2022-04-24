#include <iostream>
#include <cmath>
using namespace std;

// function declarations
int count_words_in_file(char); 

int main() {
	char file;
	int num_words;

	cout << "Enter a file name: "; 
	cin >> file;
	num_words = count_words_in_file(file);

	cout << "The file contains " << num_words << " words." << endl;
	return 0;
}

int count_words_in_file(char file) 
{
	return 123;
}
