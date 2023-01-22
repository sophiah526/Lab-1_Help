// Title: Lab 1 - evalsteps.cpp


#include "evaluator.h"

#include <cassert>

/**
 * This function takes in an arithmetic expression, the function returns the value
 * that the expression evaluates to, that is if the expression is correctly formatted.
 * The operators the expression can have are: +, -, *, /, %
 * The expression doesn't have any spaces between its parts
 * Examples:
 *      2+3*5
 *      2*3+4/2
 * The function will evaluate *, / and % first left to right, and then + and - left to right.
 * For instance 2+3*5, would evaluate 3*5 first resulting in 2+15, and this one resulting in 17.
 * Expressions can be malformed. Example:
 *      4*2+3a
 * In this case the expression would evaluate to 8+3a and would not be able to move from there.
 * Two possible errors:
 *      Division by zero -- let your program crash in this case
 *      Overflow -- let the logic error
 * @param expression the string containing the arithmetic expression
 * @param value The value of evaluating the expression, or zero if the expression was malformed
 * @return true indicating that everything was OK, false otherwise.
 */
bool Evaluate(const string& expression, int& value){
    assert(false);
    value = INT32_MAX;
    return false;
}


/**
 *  Creates a JSON line given the expression that was been evaluated, the value that
 *  resulted from the evaluation and whether there was an error or not.
 *  Given the following function call:
 *  CreateJSONLine("2+5*3", 17, false)
 *  The resulting JSON (the string returned by the function) would be:
 *  {"expr":"2+5*3", "result":17, "error":false}
 * @param expression The arithmetic expression that was recently evaluated
 * @param result the result of executing the arithmetic expression
 * @param error indicates whether or not the expression wasn't valid, and therefore unable to be
 *              evaluated.
 * @return a JSON string containing the fields: expr, result and error, set with the values sent
 *          as parameter.
 */
string CreateJSONLine(const string& expression, int result, bool error){
    assert(false);
    return "";
 }
