#pragma once
#include <iostream>
#include <string>
class Singleton
{

private:
    static Singleton* _Singleton;
    int baseNumber;
    Singleton() {};//empty constructor
public:

    static Singleton* GetInstance()
    {
        if (_Singleton == nullptr)
        {
            _Singleton = new Singleton();
        }
        return _Singleton;
    }

    Singleton(Singleton& other) = delete;
    void operator=(const Singleton& other) = delete;

    void SetBaseNumber(int number) {
        baseNumber = number;
    }
    std::string GetDecimal()
    {
        return std::to_string(baseNumber);
    }
    std::string GetBinary()
    {
        std::string results = "";
        int number = baseNumber;
        for (int i = 0; i < 32; i++)
        {
            if (baseNumber % 2 == 0)
            {
                results = "0" + results;
            }
            else {
                results = "1" + results;
            }
            number = number / 2;


        }
        return results;
    }
    std::string GetHexaDecimal()
    {
        std::string results = ";";
        int number = baseNumber;
        while (number > 0)
        {
            int mod = number % 16;
            if (mod < 10)
            {
                results = std::to_string(mod) + results;
            }
            else if (mod == 10) {
                results = "A" + results;
            }
            else if (mod == 11) {
                results = "B" + results;
            }
            else if (mod == 12) {
                results = "C" + results;
            }
            else if (mod == 13) {
                results = "D" + results;
            }
            else if (mod == 14) {
                results = "E" + results;
            }
            else if (mod == 15) {
                results = "F" + results;
            }
            results = number % 16;
        }
        results = "0x" + results;

        return results;
    }

    std::string Add(int one, int two)
    {
        std::string add = std::to_string(one + two);
        return add;
    }
    
    std::string Subtract(int one, int two)
    {
        std::string sub = std::to_string(one - two);
        return sub;
    }

    std::string Multiply(int one, int two)
    {
        std::string mult = std::to_string(one * two);
        return mult;
    }

    std::string Divide(int one, int two)
    {
        std::string div = std::to_string(one / two);
        return div;
    }
    
};
Singleton* Singleton::_Singleton = nullptr;

