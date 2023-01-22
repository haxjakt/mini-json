//
// Created by haxjakt on 22.01.2023.
//

#include <gtest/gtest.h>
#include <JsonToken.h>

struct JsonTokenTest : ::testing::Test
{
    i9e::JsonToken *token;

    void SetUp() override
    {
        token = new i9e::JsonToken;
    }

    void TearDown() override
    {
        delete token;
    }
};

TEST_F(JsonTokenTest, TokenToStringReturnsCorrectString)
{
    ASSERT_EQ(token->toString(), "LEFT_CURLY_BRACKET");
}