#include <iostream>
#include "WebBrowser.h"

int main()
{
    WebBrowser browser;

    browser.visit("google.com");
    browser.visit("youtube.com");
    browser.visit("github.com");

    std::cout << "Back: " << browser.back() << std::endl;
    std::cout << "Back: " << browser.back() << std::endl;
    std::cout << "Forward: " << browser.forward() << std::endl;
    std::cout << "Forward: " << browser.forward() << std::endl;

    return 0;
}