#include "mbed.h"

RawSerial pc(USBTX,USBRX);
RawSerial sig(p13,p14);

int main() {
    char c;
    while(1) {
        c = pc.getc();
        pc.putc(c);
        sig.putc(c);
    }
}