#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>

int		getRvalue(int color);
int		getGvalue(int color);
int		getBvalue(int color);
double	procent(double current, double from, double to);
int		gradient(int from, int to, double procent);

template<typename T>
std::string number_to_string(const T& value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

#endif