#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\InterviewPrepLibrary\InterviewPrepLibrary.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
    TEST_CLASS(test_unique_char)
    {
    public:

        TEST_METHOD(string_has_unique_chars_null_input)
        {
            bool areEqualNullInput = string_has_unique_chars(nullptr);
            Assert::AreEqual(areEqualNullInput, false, L"For null input, string_has_unique_chars should return false", LINE_INFO());
        }

        TEST_METHOD(string_has_unique_chars_unique_input)
        {
            bool uniqueOut = string_has_unique_chars("abcd1234");
            Assert::AreEqual(uniqueOut, true, L"For strings with unique character string_has_unique_chars returns true", LINE_INFO());

            uniqueOut = string_has_unique_chars("abcd1234xyz");
            Assert::AreEqual(uniqueOut, true, L"For strings with unique character string_has_unique_chars returns true", LINE_INFO());
        }

        TEST_METHOD(string_has_unique_chars_non_unique_input)
        {
            bool repeatOut = string_has_unique_chars("abcd1234aabbcceedd");
            Assert::AreEqual(repeatOut, false, L"For strings with repeating character string_has_unique_chars returns false", LINE_INFO());

            repeatOut = string_has_unique_chars("abcd1234xyz4");
            Assert::AreEqual(repeatOut, false, L"For strings with repeating character string_has_unique_chars returns false", LINE_INFO());
        }

    };
}