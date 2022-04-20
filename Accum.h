#ifndef ACCUM_H_
#define ACCUM_H_

#include <vector>
#include <string>
#include <sstream>

template <typename T>
// Returns sums all items passed into function
T accum(std::vector <T> v)
{
    return v.at(0) + v.at(1) + v.at(2) + v.at(3);
}
// Returns a string list that are seperated by a comma 
std::string accum(std::vector <std::string> v)
{
    //std::stringstream ss;
//
    //ss << v.at(0) << ", " << v.at(1) << ", " 
    //    << v.at(2) << ", " << v.at(3);
    //
    //return ss.str();
    return v.at(0) + ", " + v.at(1) + ", " 
        + v.at(2) + ", " + v.at(3);
}

#endif