#include <iostream>
#include "TextHandler.h"

int main() {
    TextHandler* handler = new TextHandler("/Users/alex/Desktop/bws4/statistic/symbols.txt");

    handler->parseText();
    std::cout <<  handler->getQuantity() << std::endl;

    std::cout << *handler << std::endl;

    return 0;
}
