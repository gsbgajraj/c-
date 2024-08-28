#include <iostream>
#include <queue>

using namespace std;

int main() {

  queue<string> animals;
  animals.push("Cat");
  animals.push("Dog");
  cout << "Queue: ";
  while(!animals.empty()// CPP program to illustrate
// Implementation of push() function

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	// Empty Queue
	queue<int> myqueue;
	myqueue.push(0);
	myqueue.push(1);
	myqueue.push(2);

	// Printing content of queue
	while (!myqueue.empty()) {
		cout << ' ' << myqueue.front();
		myqueue.pop();
	}
}
) {
    cout << animals.front() << ", ";  
    animals.pop();
  }

  cout << endl;
 
  return 0;
}