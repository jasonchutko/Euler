#include <sstream>

int i = 5;
std::string s;
std::stringstream out;
out << i;
s = out.str();
