#include <iostream>

using namespace std;

int main() {
	string texts[] = { "one", "two", "three" };
	string* pTexts = texts; // Assigning a pointer to texts.

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		// This loop prints the content of each location of memory of the pointer through indexing.
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		// It is also possible to print the content dereferencing the pointer. But it is necessary to
		// move the location the pointer is pointing at using `pTexts++`.
		cout << *pTexts << " " << flush;
		pTexts++;
	}

	cout << endl;

	// The following snippet of code does exactly the same as the previous piece.
	//for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
	//    cout << *pTexts << " " << flush;
	//}

	string* pElement = texts;
	string* pEnd = &texts[2];

	while (true) {
		cout << *pElement << " " << flush;

		if (pElement == pEnd) {
			break;
		}

		pElement++;
	}

	return 0;
}