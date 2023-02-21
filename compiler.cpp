/**
*Original Author: Mario Linares  
*Created 2023/02/16
*Last Updated by: Raul Jarquin Valdez
*contact information: jarquinr121@csu.fullerton.edu
*purpose of this file: Complier object is created 
*Description: All 4 phases are implemented in this file 
*(c)Copyright Compiler is free software: you can redistribute it and/or modify it under the *terms of the GNU General Public License 
*A copy of the GNU General Public License v3 is available here:  <https:;www.gnu.org/licenses/>. 




**/

#include "compiler.h"
#include <iostream>


// Constructor 
Compiler::Compiler(std::string source_code) {
    source_code_ = source_code;
}


// Using the source_code_ declared at the consturction of the Compiler object
// this method will implement the lexical analysis. When called it will create
// the token streams. It will store them in the privately declared tokens_ 
// unordered_multimap. With the key being the token name and the value being 
// the attribute value.
void Compiler::Lexer() {

}

// This method function will make use of the privately declared tokens_ 
// unordered_multimap and generate a syntax tree.
void Compiler::Parser() {
    
}

//determines the meaning of the source_code, and checks for any errors that cant be detected 
//by the lexer or parser
void Compiler::SemanticAnalyzer(){

}

//Takes the syntax tree produced by the parser and generates a sequence of instructions in the target language 
void Compiler::CodeGenerator(){

}
