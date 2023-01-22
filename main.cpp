// Title: Lab 1 - main.cpp
//
// Purpose: Practice the methods offered by the C++ standard library string class by writing a C++ program
// that reads in an arithmetic expression and prints out a step by step evaluation of the expression.
//
// Class: CSC 2430 Winter 2020
// Author: Max Benson, Carlos Arias

#include "evaluator.h"
#include "test_scripts.h"

int main(int argc, char* argv[]) {

    double count = ValidateExpressions();
    cout << "Your approximate grade is = " << count << endl;


    return 0;
}

