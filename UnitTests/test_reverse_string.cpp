#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\InterviewPrepLibrary\InterviewPrepLibrary.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
    TEST_CLASS(test_reverse_string)
    {
    public:

        TEST_METHOD(reverse_string_null_input)
        {
            char* reverseStringOut = reverse_string(nullptr);
            Assert::AreEqual(reverseStringOut, nullptr, L"For null input, reverse_string should return null", LINE_INFO());
        }

        TEST_METHOD(reverse_string_even_length_input)
        {
            char string[] = "abcdef";
            char *reversedString = reverse_string(string);
            Assert::AreEqual(reversedString, "fedcba", L"reverse_string did not return the reversed string", LINE_INFO());
        }

        TEST_METHOD(reverse_string_odd_length_input)
        {
            char string[] = "abcde";
            char *reversedString = reverse_string(string);
            Assert::AreEqual(reversedString, "edcba", L"reverse_string did not return the reversed string", LINE_INFO());
        }

        TEST_METHOD(reverse_string_one_and_two_chracter_input)
        {
            char single_char_string[] = "a";
            char *reversedString = reverse_string(single_char_string);
            Assert::AreEqual(reversedString, "a", L"reverse_string did not return the reversed string", LINE_INFO());

            char double_char_string[] = "ab";
            reversedString = reverse_string(double_char_string);
            Assert::AreEqual(reversedString, "ba", L"reverse_string did not return the reversed string", LINE_INFO());
        }
    };
}