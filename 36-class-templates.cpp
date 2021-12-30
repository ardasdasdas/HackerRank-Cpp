#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template <class T> 
class AddElements {
    T element;
    public:
        AddElements(T i) {element = i;}
        T add(T i) {return element+i;}
        
};
template <> 
class AddElements <string> {
        string element;
    public:
        
        AddElements(string i) {element = i;}
        string concatenate(string element2) {return element+element2;}
        
};
template <> 
class AddElements <int> {
        int element;
    public:
        
        AddElements(int i) {element = i;}
        int add(int element2) {return element+element2;}
};
template <> 
class AddElements <double> {
        double element;
    public:
        
        AddElements(double i) {element = i;}
        double add(double element2) {return element+element2;}
        
};

int main () {