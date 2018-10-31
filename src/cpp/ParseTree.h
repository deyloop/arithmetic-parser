#ifndef _PARSETREE_H_
#define _PARSETREE_H_

#include <vector>
#include <string>

#include "Token.h"

struct ParseNode {
    std::string name;

    std::vector<ParseNode> subNodes;
    std::vector<Token> tokens;

    static ParseNode Default;
};

#endif