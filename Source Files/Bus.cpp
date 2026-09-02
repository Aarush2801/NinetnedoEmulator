//
//  bus.cpp
//  
//
//  Created by Aarush Singh on 2026-08-30.
//

#include "Bus.h"

Bus::Bus()
{
    // clearing ram contents (who nkows)
    for (auto &i : ram) i = 0x00;

    // should connect cpu to the connection bus

    cpu.ConnectBus(this);
}

Bus::~Bus()

void Bus::write(uint16_t addr, uint8_t data)
{
    if (addr >= 0x0000 && addr<= 0xFFFF)
        ram[addr] = data;

}

uint8_t Bus::read(uint16_t addr, bool bReadOnly)
{
        if (addr >= 0x0000 && addr<= 0xFFFF)
            return ram[addr];
        return 0x00;

}

