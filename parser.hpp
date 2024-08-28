#ifndef PARSER_HPP
#define PARSER_HPP

#include <iostream>
#include <map>
#include <string>

class SyntaxError : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "Erro de sintaxe!";
    }
};

class Parser
{
private:
    char lookahead;
    std::map<std::string, int> _tokens;

    void Expr();
    void Term();
    void Match(char t);

public:
    Parser();
    void Start();
};

#endif
