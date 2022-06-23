#include "pch.h"
#include "CppUnitTest.h"
#include "../CalculatorLab/ButtonFactory.h"
#include "../CalculatorLab/calcMain.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingOneTwoTesting
{
	TEST_CLASS(TestingOneTwoTesting)
	{
	public:
			calcMain* test = new calcMain();
			ButtonFactory butts = ButtonFactory();

		

		TEST_METHOD(Button1)
		{
			wxButton* temp = butts.Create(test, 20, "1", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "1");

		}

		TEST_METHOD(Button2)
		{
			wxButton* temp = butts.Create(test, 420, "2", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "2");

		}
		TEST_METHOD(Button3)
		{
			wxButton* temp = butts.Create(test, 80, "3", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "3");

		}
		TEST_METHOD(Button4)
		{
			wxButton* temp = butts.Create(test, 58, "4", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "4");

		}
		TEST_METHOD(Button5)
		{
			wxButton* temp = butts.Create(test, 98, "5", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "5");

		}
		TEST_METHOD(Button6)
		{
			wxButton* temp = butts.Create(test, 10, "6", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "6");

		}
		TEST_METHOD(Button7)
		{
			wxButton* temp = butts.Create(test, 2, "7", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "7");

		}
		TEST_METHOD(Button8)
		{
			wxButton* temp = butts.Create(test, 67, "8", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "8");

		}
		TEST_METHOD(Button9)
		{
			wxButton* temp = butts.Create(test, 44, "9", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "9");

		}
		TEST_METHOD(Button10)
		{
			wxButton* temp = butts.Create(test, 1, "10", 50, 50);
			Assert::AreEqual(temp->GetLabel(), "10");

		}


	};
}
