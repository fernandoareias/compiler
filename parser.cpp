#include "parser.hpp"
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

Parser::Parser() : lookahead(0)
{
    _tokens["+"] = 1;
    _tokens["-"] = 2;
}

void Parser::Start()
{
    lookahead = cin.get();
    Expr();
    if (lookahead != '\n')
        throw SyntaxError{};
}

void Parser::Expr()
{
    Term();

    while (true)
    {
        std::string lookaheadStr(1, lookahead);

        if (_tokens.count(lookaheadStr) == 0)
            return;

        Match(lookahead);
        Term();

        cout << lookahead;
    }
}

void Parser::Term()
{
    if (!isdigit(lookahead))
        throw SyntaxError{};

    cout << lookahead;
    Match(lookahead);
}

void Parser::Match(char t)
{
    if (t != lookahead)
        throw SyntaxError{};

    lookahead = cin.get();
}
