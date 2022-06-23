#include "pch.h"
#include "CppUnitTest.h"
#include "../CalculatorLab/ButtonFactory.h"
#include "../CalculatorLab/Singleton.h"
#include "../CalculatorLab/calcMain.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingOneTwoTesting
{
	TEST_CLASS(TestingOneTwoTesting)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Singleton* TestProc = Singleton::GetInstance();
			TestProc->SetBaseNumber(69);
			std::string bin = "01000101";
			Assert::AreEqual(TestProc->GetBinary(), bin);
		}
		TEST_METHOD(TestMethod2)
		{
			Singleton* TestProc = Singleton::GetInstance();
			TestProc->SetBaseNumber(50);
			std::string hex = "0x32";
			Assert::AreEqual(TestProc->GetHexaDecimal(), hex);
		}
		TEST_METHOD(TestMethod3)
		{
			Singleton* TestProc = Singleton::GetInstance();
			TestProc->SetBaseNumber(20);
			std::string bin = "00010100";
			Assert::AreEqual(TestProc->GetBinary(), bin);
		}
		TEST_METHOD(TestMethod4)
		{
			Singleton* TestProc = Singleton::GetInstance();
			TestProc->SetBaseNumber(87);
			std::string hex = "0x57";
			Assert::AreEqual(TestProc->GetHexaDecimal(), hex);
		}
		TEST_METHOD(TestMethod5)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Add(2, 2);
			std::string ans = "4";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod6)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Add(6, 15);
			std::string ans = "21";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod7)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Multiply(2, 12);
			std::string ans = "24";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod8)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Multiply(3, 8);
			std::string ans = "24";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod9)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Divide(2, 2);
			std::string ans = "1";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod10)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Divide(20, 5);
			std::string ans = "4";
			Assert::AreEqual(s, ans);
		}




		TEST_METHOD(TestMethod11)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Divide(16, 2);
			std::string ans = "8";
			Assert::AreEqual(s, ans);
		}
		
		TEST_METHOD(TestMethod13)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Add(2, 60);
			std::string ans = "62";
			Assert::AreEqual(s, ans);
		}
		
		TEST_METHOD(TestMethod15)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Subtract(2, 2);
			std::string ans = "0";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod16)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Subtract(15, 6);
			std::string ans = "9";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod17)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Multiply(15, 3);
			std::string ans = "45";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod18)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Divide(6, 3);
			std::string ans = "2";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod19)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Divide(15, 3);
			std::string ans = "5";
			Assert::AreEqual(s, ans);
		}
		TEST_METHOD(TestMethod20)
		{
			Singleton* TestProc = Singleton::GetInstance();
			std::string s = TestProc->Add(2, 97);
			std::string ans = "99";
			Assert::AreEqual(s, ans);
		}	
	};
}
