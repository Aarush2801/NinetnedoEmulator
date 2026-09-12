#pragma once

class Bus;

class olc6502
{

    public:
        olc6502();
        ~olc6502();
    
    public:
        enum FLAGS6502
        {
            C = (1 << 0), //this is the carry bit apparently
            Z = (1<<1), //Zero
            I = (1<<2), //Disable Interrupts
            D = (1<<3),// Decimal Mode (Not gonna implement this rn cuz the original nes didn't have it either)
            B = (1<<4),//Break
            U = (1<<5),//Unused
            V = (1<<6),//Overflow
            N = (1<<7),//Negative


        };
        









        void ConnectBus(Bus *n){    bus = n;  }

    private:
        Bus        *bus = nullptr;
         uint8_t read(uint16_t a);
         void  write(uint16_t a, uint8_t d);
    

};
