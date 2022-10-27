#pragma once

#include "Struct.h"

class ITestService
{
public:
    virtual bool SetTestBool(bool param) = 0;
    virtual bool SetTestInt(int param) = 0;
    virtual bool SetTestDouble(double param) = 0;
    virtual bool SetTestString(std::string param) = 0;
    virtual bool SetTestInfo(TestInfo param) = 0;
    
    virtual bool GetTestBool() = 0;
    virtual int GetTestInt() = 0;
    virtual double GetTestDouble() = 0;
    virtual std::string GeTestString() = 0;
    virtual TestInfo GetTestInfo() = 0;
};
