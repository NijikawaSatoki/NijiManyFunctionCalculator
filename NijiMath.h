#ifndef NIJIMATH_H
#define NIJIMATH_H

class NijiMath {
public:
    // Arithmetic operations
    signed int addition(signed int x, signed int y);
    signed int subtraction(signed int x, signed int y);
    int multiplication(int x, int y);
    double division(double x, double y);
    int modulus(int x, int y);
    // Bitwise operations
    short bitwiseAND(short x, short y);
    short bitwiseOR(short x, short y);
    short bitwiseXOR(short x, short y);
    short bitwiseNOT(short x);
    short bitShiftLeft(short x, short y);
    short bitShiftRight(short x, short y);
};

#endif // NIJIMATH_H

/* >>>>>> END OF FILE <<<<<< */
