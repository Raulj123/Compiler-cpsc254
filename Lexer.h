/* Original Author: Menfeng Xue
Created: 2023/02/16
Purpose of this file: this file is a header file includes lexer class. It's used for lexical analyzer.
(c)Copyright Compiler is free software: you can redistribute it and/or modify it under theterms of the GNU General Public License *A copy of the GNU General Public License v3 is available here:  <https:;www.gnu.org/licenses/>.
*/

struct Token
{
    std::string token;
    Token* prev;
    Token* next;
}

class Lexer
{
    public:
        Token isPunctuator(std::char ch); // check if character is punctuator，if yes, store in Token
        Token validIdentifier(std::char* str); // check if string is indentifier, if yes, store in token.
        Token isOperator(std::char ch); // check if character is operator, if yes, store in token.
        Token isKeyword(std::char* str); // check if string is keyword, if yes, store in token.
        Token isNumber(std::char* str); // check if string is number, if yes, store in token.

        
    private:
        Token token_stream;

};
