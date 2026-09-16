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

        uint8_t a = 0x00; // accumulator register
        uint8_t x = 0x00; //X register
        uint8_t y = 0x00; // Y register
        uint8_t stkp = 0x00; // STack pointer (will point to location in bus)
        uint16_t pc = 0x0000; // Program counter
        uint8_t status = 0x00; //Status registerer
        


        void ConnectBus(Bus *n){    bus = n;  }

        // Addressing mode

        uint8_t IMP();  uint8_t IMP();
        uint8_t IMP();  uint8_t IMP();
        uint8_t IMP();  uint8_t IMP();
        uint8_t IMP();  uint8_t IMP();
        uint8_t IMP();  uint8_t IMP();
        uint8_t IMP();  uint8_t IMP();


    private:
        Bus        *bus = nullptr;
         uint8_t read(uint16_t a);
         void  write(uint16_t a, uint8_t d);

         // just a convenience function

         uint8_t GetFlag(FLAGS6502 f);
         void SetFlag(FLAG6502 f, bool v);
    

};
