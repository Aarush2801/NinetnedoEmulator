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
        }
        









        void ConnectBus(Bus *n){    bus = n;  }

    private:
        Bus        *bus = nullptr;
         uint8_t read(uint16_t a);
         void  write(uint16_t a, uint8_t d);
    

};
