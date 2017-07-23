#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\InterviewPrepLibrary\InterviewPrepLibrary.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
    TEST_CLASS(test_strings_are_permutation)
    {
    public:

        TEST_METHOD(test_strings_are_permutation_null_input)
        {
            bool arePermutations = strings_are_permutation(nullptr, "abc");
            Assert::AreEqual(arePermutations, false, L"For null input, strings_are_permutation should return false", LINE_INFO());

            arePermutations = strings_are_permutation("abc", nullptr);
            Assert::AreEqual(arePermutations, false, L"For null input, strings_are_permutation should return false", LINE_INFO());

            arePermutations = strings_are_permutation(nullptr, nullptr);
            Assert::AreEqual(arePermutations, false, L"For null input, strings_are_permutation should return false", LINE_INFO());

        }

        TEST_METHOD(test_strings_are_permutation_unequal_length_string)
        {
            bool arePermutations = strings_are_permutation("abcd1234", "abc");
            Assert::AreEqual(arePermutations, false, L"For strings of unequal length, strings_are_permutation should return false", LINE_INFO());

            arePermutations = strings_are_permutation("a", "ab");
            Assert::AreEqual(arePermutations, false, L"For strings of unequal length, strings_are_permutation should return false", LINE_INFO());
        }

        TEST_METHOD(test_strings_are_permutation_possitive_test_case)
        {
            bool arePermutations = strings_are_permutation("abcd1234", "1234abcd");
            Assert::AreEqual(arePermutations, true, L"For strings which are permutations, strings_are_permutation should return true", LINE_INFO());

            arePermutations = strings_are_permutation("abcdef", "fedcba");
            Assert::AreEqual(arePermutations, true, L"For strings which are permutations, strings_are_permutation should return true", LINE_INFO());

            arePermutations = strings_are_permutation("ab", "ab");
            Assert::AreEqual(arePermutations, true, L"For identical strings, strings_are_permutation should return true", LINE_INFO());
        }

        TEST_METHOD(test_strings_are_permutation_negative_test_case)
        {
            bool arePermutations = strings_are_permutation("abcd1234", "1234wxyz");
            Assert::AreEqual(arePermutations, false, L"For strings which are not permutations, strings_are_permutation should return false", LINE_INFO());

            arePermutations = strings_are_permutation("abcdef", "ffdcba");
            Assert::AreEqual(arePermutations, false, L"For strings which are not permutations, strings_are_permutation should return false", LINE_INFO());

            arePermutations = strings_are_permutation("a", "b");
            Assert::AreEqual(arePermutations, false, L"For strings which are not permutations, strings_are_permutation should return false", LINE_INFO());
        }
    };
}