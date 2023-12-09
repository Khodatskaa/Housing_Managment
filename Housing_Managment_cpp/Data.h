#ifndef Data_h
#define Data_h

#include <string>

class Data {
public:
    static void writeToFile(const std::string& filename, const std::string& data);
    static std::string readFromFile(const std::string& filename);
};

#endif

