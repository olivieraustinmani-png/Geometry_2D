#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

// Templates ToString et Print
template<typename T>
std::string ToString(const T& value);

template<typename T>
std::string ToString(const std::vector<T>& v);

template<typename K, typename V>
std::string ToString(const std::map<K, V>& m);

template<typename T, typename... Args>
void Print(const T& first, const Args&... args);

#endif
