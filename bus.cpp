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
    for (auto &i : ram) i = 0x00
}

Bus::~Bus()

void Bus::write(
