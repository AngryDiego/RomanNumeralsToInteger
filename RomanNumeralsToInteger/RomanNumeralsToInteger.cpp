#include <iostream>
using namespace std;

int RomToInt(char numeral) {
	switch (numeral) {
	case 'I' : return 1;
	case 'V' : return 5;
	case 'X' : return 10;
	case 'L' : return 50;
	case 'C' : return 100;
	case 'D' : return 500;
	case 'M' : return 1000;
	}
}

int main() {
	string inputdata = "XVI";
	int result = 0;

	for (int i = 0; i < inputdata.length(); i++) {
		result += RomToInt(inputdata[i]);
	}
	cout << result << endl;

}