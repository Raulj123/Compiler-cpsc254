#ifndef COMPILER_h
#define COMPILER_H

#include <string>
#include <unordered_map>

class Compiler {
    private:
        std::string source_code_;
        std::unordered_multimap<std::string, std::string> tokens_;

    public:
        Compiler(std::string source_code) {};   
        void Lexer();
        void Parser();
        void SemanticAnalyzer();
        void CodeGenerator();
}; 


#endif
