#include "queue_array.h"
#include <queue>
#include <iostream>
#include <string>
using namespace std;

int main () {
	::queue<string> que; // A queue for testing
	int n = 0; // Count of test values pushed to queue
	string s; // A string value, input

	// Enter some strings for testing
	cout << "Enter string: ";
	getline(cin, s);
	while (s.size()) {
		// Push string to queue
		que.push(s);
		cout << "Size: " << que.size() << ", Front: "
			<< que.front() << ", Back: " << que.back() << endl;
		if (!(++n % 5)) {
			// After every 5 pushes, we'll pop twice
			cout << "Pop: " << que.front() << endl;
			que.pop();
			cout << "Pop: " << que.front() << endl;
			que.pop();
			cout << "Size: " << que.size() << ", Front: "
				<< que.front() << ", Back: " << que.back() << endl;
		}
		cout << endl << "Enter string: ";
		getline(cin, s);
	}

	// Pop queue until it's empty
	while (!que.empty()) {
		cout << "Size: " << que.size() << ", Front: "
			<< que.front() << ", Back: " << que.back() << endl;
		que.pop();
	}
    cout << "Size: 0," << endl; 
	return 0;
}

// only places editing was hardcoding in size zero output at line 39
// and inserting :: at line 8 to address scope resolution issue; 