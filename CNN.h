#pragma once
#ifndef __CNN__
#define __CNN__

#include "DNN_.h"

class CNN_Frame {
public:
    CNN_Frame();
    //< input/cfg/res
    CNN_Frame(const char*, const char*, const char*);
    ~CNN_Frame();

    //< read cfg to construct CNN_Frame
    //< detail in CNN.cpp part
    void read_cfg();

    //< read input
    void read_input();

    //< go forward
    void Forward();

    //< go backward
    void Backward(double);
private:
    CNN_Part __CNN;
    DNN_Part __DNN;

    //< learning rate
    double __Eta;

    //< neccessary file operation
    std::ifstream __input;
    std::ifstream __cfg_read;

    std::ofstream __res_output;
};
#endif // !__CNN__

