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
	string inputdata = "XIV";
	int result = 0;


	for (int i = inputdata.length() - 1; i > -1; i--) {
		if ((i > 0) && RomToInt(inputdata[i - 1]) < RomToInt(inputdata[i])) {
			result += (RomToInt(inputdata[i]) - RomToInt(inputdata[i - 1]));
		}
		else {
			result += RomToInt(inputdata[i]);
		}
	}
	cout << result << endl;
}