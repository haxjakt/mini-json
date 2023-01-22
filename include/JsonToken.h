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
    LEFT_CURLY_BRACKET,
    RIGHT_CURLY_BRACKET
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
