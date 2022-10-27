#pragma once

#include "Struct.h"

class ITestService
{
public:
    virtual void OnTestBoolChanged(bool param) = 0;
    virtual void OnTestIntChanged(int param) = 0;
    virtual void OnTestDoubleChanged(double param) = 0;
    virtual void OnTestStringChanged(std::string param) = 0;
    virtual void OnTestInfoChanged(TestInfo param) = 0;  
};