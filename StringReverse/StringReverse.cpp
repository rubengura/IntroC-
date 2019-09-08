#include <iostream>

using namespace std;

int main() {
	char text[] = "hello";

	cout << text << endl;

	// The last element of a char array is a 0 that indicates end of string. For this reason, it is necessary to
	// substract 1 to the size of text array.
	int nChars = sizeof(text) - 1;

	char *pStart = text; // Pointer that looks the first element of text array.
	char *pEnd = text + nChars - 1; // Pointer that looks the last element of text array. It is important to note
	// that the pointer of text would have a value of 1. For that reason text (1) + nChars(5) would be = 6.
	// For that reason, it is necessary to substract 1 to *pEnd to point to the last element of text array.

	while (pStart < pEnd) {

		char save = *pStart; // It is necessary to initialize `save` variable to store the current element of the array.
		*pStart = *pEnd; // Swapping the element pointed by *pStart for the element pointed by *pEnd.
		*pEnd = save; // Swapping the element pointed by *pEnd for the element pointed by `save`.

		pStart++; // Moving the *pStart pointer forward.
		pEnd--; // Moving the *pEnd pointer backward.
	}

	cout << text << endl;

	return 0;
}