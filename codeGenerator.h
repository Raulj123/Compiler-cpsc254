// Original Author: Kevin Viers
//Created: 2023/02/22
// Purpose of this file: This is a possible header file for the code generator part of our compiler. 


#ifndef CODE_GENERATOR_H
#define CODE_GENERATOR_H

#include <string>
#include <vector>
#include "Lexer.h"
#include "ASTNode.h"
#include "SymbolTable.h"

struct Instruction {
    std::string opcode;
    std::string operand1;
    std::string operand2;
    std::string operand3;
};

class CodeGenerator {
public:
    CodeGenerator();
    void generateCode(ASTNode* astNode, SymbolTable& symbolTable);
    void writeCodeToFile(std::string fileName);
    void printCode();
private:
    std::vector<Instruction> instructions;
    void generateInstruction(Instruction instr);
    void generateData(std::string identifier, std::string value);
};

#endif // CODE_GENERATOR_H
