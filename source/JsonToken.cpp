//
// Created by haxjakt on 22.01.2023.
//
#include <JsonToken.h>
#include <string>

namespace i9e
{

JsonToken::JsonToken()
    : mType(TokenType::LEFT_CURLY_BRACKET)
{}

std::string JsonToken::toString() const
{
    switch (mType) {
        case TokenType::LEFT_CURLY_BRACKET: return "LEFT_CURLY_BRACKET";
        case TokenType::RIGHT_CURLY_BRACKET: return "RIGHT_CURLY_BRACKET";
    }
}

}  // namespace i9e