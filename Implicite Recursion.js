#include <bits/stdc++.h>

using namespace std;

int findLargest(vector<int> numbers) {
int largest = numbers[0];
for (int number : numbers) {
	if (number > largest) {
	largest = number;
	}
}
return largest;
}

int findSecondLargest(vector<int> numbers) {
// Remove the largest number from the list
numbers.erase(remove(numbers.begin(), numbers.end(), findLargest(numbers)), numbers.end());

// Return the largest remaining number
return findLargest(numbers);
}

int main() {
vector<int> numbers = {1, 2, 3, 4, 5};

// Function call
int secondLargest = findSecondLargest(numbers);
cout << secondLargest << endl;

return 0;
}
