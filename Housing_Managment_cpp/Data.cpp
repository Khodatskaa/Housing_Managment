#include "Data.h"
#include <fstream>
#include <iostream>

void Data::writeToFile(const std::string& filename, const std::string& data) {
    std::ofstream outputFile(filename);

    if (outputFile.is_open()) {
        outputFile << data;
        outputFile.close();
        std::cout << "Data written to " << filename << " successfully\n";
    }
    else {
        std::cout << "Error: Unable to open file " << filename << " for writing\n";
    }
}

std::string Data::readFromFile(const std::string& filename) {
    std::ifstream inputFile(filename);

    if (inputFile.is_open()) {
        std::string content((std::istreambuf_iterator<char>(inputFile)), (std::istreambuf_iterator<char>()));
        inputFile.close();
        std::cout << "Data read from " << filename << " successfully\n";
        return content;
    }
    else {
        std::cout << "Error: Unable to open file " << filename << " for reading\n";
        return "";
    }
}
