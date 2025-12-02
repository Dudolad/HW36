#pragma once
#include <iostream>
#include <string>;

template <typename T>
class MyStack {
	static const int MAX = 100;
	T arr[MAX];
	int TopIndex;
public:
	MyStack() :TopIndex(-1) {}

	bool isEmpty() const {
		return TopIndex == -1;
	}

	T top() const {
		if (isEmpty()) throw "Stack is empty!";
		return arr[TopIndex];
	}

	void push(const T& value) {
		if (TopIndex + 1 >= MAX) throw "Stack overflow!";
		arr[++TopIndex] = value;
	}

	void pop() {
		if (isEmpty()) throw "Stack is empty";
		topIndex--;
	}

	void show() {
		if (isEmpty())
		{
			std::cout << "Stack is empty!\n";
			return;
		}
		for (int i = 0; i <= TopIndex; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
};