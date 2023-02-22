/*
*Original Author: Raul Jarquin Valdez
*Created 2023/02/16
*Last Updated by: Raul Jarquin Valdez
*contact information: jarquinr121@csu.fullerton.edu
*purpose of this file: Parsing and interpreting data 
*Description: analyzing a string to identify its structure and exact specific information
*(c)Copyright Compiler is free software: you can redistribute it and/or modify it under the *terms of the GNU General Public License 
*A copy of the GNU General Public License v3 is available here:  <https:;www.gnu.org/licenses/>. 
*/


#ifndef Parser_H
#define Parser_H

#include <vector>
#include "Lexer.h"
// This class represents a node in the parse tree, each node has a value as well as a vector of children
//#include "parse_tree.h"
// to complex to implement so just simplifed this 
class SyntaxAnalyzer {
public:
    //Takes a reference to a Lexer object as a parameter and stores it in m_lexer
    SyntaxAnalyzer(Lexer& lexer);
    //returns a pointer to a ParseTree object that represents the parse tree 
    ParseTree* parse();

private:
    Lexer& m_lexer;
    Token m_currentToken;

    // parsing a statement in the source code and returning a ParseTree object that represents the statment 
    ParseTree* parseStatement();
    //parsing an expression and returns parseTree object represents the expression
    ParseTree* parseExpression();
    //parsing fucntion call 
    ParseTree* parseFunctionCall();
    // ...
};

#endif 