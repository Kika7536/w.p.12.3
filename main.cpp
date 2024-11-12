#include<iostream>
#include<vector>

using namespace std;

void main() {
	vector<int> db(20);
	int in = 0;
	int counter = 0;
	int wheels = 0;


	while (true) {

		while (in != -1) {
			cout << "Input number: ";
			cin >> in;


			if (counter > 19) {
				counter = 0; wheels++;
			}
			if (in != -1) db[counter] = in;;
			counter++;


		}

		

		counter--;

		cout << "Output: ";

		if (wheels != 0) {
			for (int i = 0; i < size(db); i++) {
				cout << db[counter] << " ";
				counter++;
				if (counter > 19) counter = 0;
			}
		}
		else {
			for (int i = 0; i < counter; i++) {
				cout << db[i] << " ";

			}
		}

		cout << endl;

		in++;
	}

	
}

