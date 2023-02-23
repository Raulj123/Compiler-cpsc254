/*
*Original Author: Saul Andrade
*Created 2/22/23
*contact information: saulandrade124@csu.fullerton.edu
*purpose of this file: Determin th edeclarations and statements of a program are semantically correct
*(c)Copyright Compiler is free software: you can redistribute it and/or modify it under the *terms of the GNU General Public License 
*A copy of the GNU General Public License v3 is available here:  <https:;www.gnu.org/licenses/>. 
*/
#include <string>
#include <stack>
#include "Lexer.h"
#include "Parser.h"



class SemanticAnalyzer{

    public:

        void traverse();//Traverse the source code to check each token(traverse the string to check each token)
        void checkAssignments();//checks what the var is declared as (string, int, bool, ect..)
        bool CheckIfDeclared();//Checks if the token is a declared var(int x; or int x = 10;)
        bool CheckifVarMisUsed();//check if var is declared incorrectly(ex: string x = 2)
        bool CheckFlowControl();//Check that control structures are used properly(ex:no break out of loop)


    private:
        Token CurrentTok;
        Lexer& lex;

};