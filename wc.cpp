#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	char next;
	char last = 'x';
	int num_words = 0;
	char in_file_name[16];
	ifstream in_stream;
	
	// get filename from user
	cout << "Enter a file name: "; 
	cin >> in_file_name;
	
	// open file, throw error if fail
	in_stream.open(in_file_name);
	if (in_stream.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

	// while loop iterating until file complete
	while (! in_stream.eof()) 
	{
		// increment ct if char is whitespace but prev char is NOT whitespace
		if (next && isspace(next) && !isspace(last)) {
			num_words += 1;		
		}
		last = next;

		// get next word
		in_stream.get(next);
	}
	if (num_words == 0)
	{ 
		num_words = 1; 
	}
	// output num words
	cout << "The file contains " << num_words << " words." << endl;
	
	// close file 
	in_stream.close();
	return 0;
}
