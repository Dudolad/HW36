#pragma once
#include "MyStack.h"

class WebBrowser
{
private:
	MyStack <std::string> history;
	MyStack <std::string> forwardStack;
public:
	void visit(const std::string& url) {
		history.push(url);
		while (!forwardStack.isEmpty())
			forwardStack.pop();
	}

	std::string back() {
		if (history.isEmpty()) return "No history";

		std::string current = history.top();
		history.pop();
		forwardStack.push(current);
		
		if (history.isEmpty()) return "No previous site";
		return history.top();
	}

	std::string forward() {
		if (forwardStack.isEmpty()) return "No forward history";

		std::string next = forwardStack.top();
		forwardStack.pop();
		history.push(next);

		return history.top();
	}
};
