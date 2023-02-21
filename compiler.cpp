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
void Compiler::lexer() {

}

// This method function will make use of the privately declared tokens_ 
// unordered_multimap and generate a syntax tree.
void Compiler::parser() {
    
}
