//
//  bus.h
//  
//
//  Created by Aarush Singh on 2026-08-30.
//

#pragma once
#include <cstdint>



class Bus
{
public:
    Bus();
    ~Bus
    
public: // Devices on Bus
    ol6502 cpu;
    
    // Fake ram for this part
    
    std::array< uint8_t, 64*1028> ram;
    
    
    
public: //Bus read and write
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr, bool bReadOnly = false);
};

