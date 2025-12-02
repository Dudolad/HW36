#include <iostream>
#include "WebBrowser.h"

int main()
{
    WebBrowser browser;

    browser.visit("google.com");
    browser.visit("youtube.com");
    browser.visit("github.com");

    browser.showHistory();
    browser.showForward();

    std::cout << "Back: " << browser.back() << std::endl;
    browser.showHistory();
    browser.showForward();

    std::cout << "Back: " << browser.back() << std::endl;
    browser.showHistory();
    browser.showForward();

    std::cout << "Forward: " << browser.forward() << std::endl;
    browser.showHistory();
    browser.showForward();

    std::cout << "Forward: " << browser.forward() << std::endl;
    browser.showHistory();
    browser.showForward();

    return 0;
}