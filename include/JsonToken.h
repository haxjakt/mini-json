//
// Created by haxjakt on 22.01.2023.
//

#ifndef MINI_JSON_JSONTOKEN_H
#define MINI_JSON_JSONTOKEN_H

#include <string>

namespace i9e
{

enum class TokenType
{
    OPEN_CURLY_BRACKET,
    CLOSED_CURLY_BRACKET,
    OPEN_SQUARE_BRACKET,
    CLOSED_SQUARE_BRACKET
};

class JsonToken
{
public:
    JsonToken();

    [[nodiscard]]
    std::string toString() const;

private:
    TokenType mType;
};

}

#endif //MINI_JSON_JSONTOKEN_H
