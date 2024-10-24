// stack recursion HW 1
#include <iostream>
#include <stack>
using namespace std;
void insert_at_bottom(stack<int>& st, int x)
{
	if (st.size() == 0) {
		st.push(x);
	}
	else {
		// All items are held in Function Call Stack until we reach end of the stack
		// When the stack becomes empty, the st.size() becomes 0, the above if
		// part is executed and the item is inserted at the bottom
		int a = st.top();
		st.pop();
		insert_at_bottom(st, x);

		// push allthe items held in Function Call Stack
		// once the item is inserted at the bottom
		st.push(a);
	}
}
// Below is the function that reverses the given stack using insert_at_bottom()
void reverse(stack<int>& st)
{
	if (st.size() > 0) {

		// Hold all items in Function Call Stack until we reach end of the stack
		int x = st.top();
		st.pop();
		reverse(st);

		// Insert all the items held in Function Call Stack
		// one by one from the bottom to top. Every item is inserted at the bottom
		insert_at_bottom(st, x);
	}
	return;
}
int main()
{
	//stack<int> st;
	stack<int> st2;
	// push elements into the stack

	stack<int>st;
	st.push(28);
	st.push(29);
	st.push(30);
	st.push(31);

	st2 = st;

	cout << "Original Stack" << endl;
	// printing the stack after reversal
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}
	cout<<endl;

	// function to reverse the stack
	reverse(st);
	cout << "Reversed Stack" << endl;

	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

	return 0;
}

