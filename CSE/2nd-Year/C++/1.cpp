#include <iostream>
using namespace std;

int main()
{
    int num1 = 5;
     // 1. Perform operations in : i) Arithmetic operators ( ++, --, %, / etc.) 
    cout << num1++ << endl; // ++ post increment arithmetic operator.
    cout << num1-- << endl; // -- post decrement arithmetic operator.
    cout << ++num1 << endl; // ++ pre increment arithmetic operator.
    cout << --num1 << endl; // ++ pre decrement arithmetic operator.
    
    cout << num1 + 2 << endl; // addition arithmetic operator.
    cout << num1 - 2 << endl; // difference arithmetic operator.
    cout << num1 * 2 << endl; // product arithmetic operator.
    cout << num1 / 2 << endl; // division arithmetic operator.
    cout << num1 % 2 << endl; // modulus arithmetic operator.
    
    // 2. Perform operations in : i) Relational operators ( ==, >=, <=, != etc.)
    if(num1 == 5) // == relational operator
    {
        cout << num1 << " == 5" <<endl;
    }
    
    if(num1 > 4) // > relational operator
    {
        cout << num1 << " > 4" << endl;
    }
    
    if(num1 < 6) // < relational operator
    {
        cout << num1 << " < 6" << endl;
    }
    
    if(num1 >= 5) // >= relational operator
    {
        cout << num1 << " >= 5" << endl;
    }
    
    if(num1 <= 5) // <= relational operator
    {
        cout << num1 << " <= 5" << endl;
    }
    
    if(num1 != 5) // != relational operator
    {
        cout << num1 << " != 5" << endl;
    }
    
    // 3. Perform operations in : i) Logical  operators ( || , &&,  !  etc.)
    if(num1 > 0 && num1 < 10) // && logical operator
    {
        cout << "Logical 0" << endl;
    }
    
    if(num1 > 0 || num1 < 10) // || logical operator
    {
        cout << "Logical 1" << endl;
    }
    
    if(!(num1 != 5)) // ! logical operator
    {
        cout << "Logical 2" << endl;
    }
    
    // 4.  Perform operations in : i) Bitwise operators ( I, &, <<, >>  etc.)
    int temp =  num1 & 2;
    cout << temp << endl; // & Bitwise operators.
    temp =  num1 | 2;
    cout << temp << endl; // | Bitwise operators.
    temp =  num1 ^ 2;
    cout << temp << endl; // ^ Bitwise operators.
    cout << (num1 << 1) << endl; // left shift Bitwise operators.
    cout << (num1 >> 1) << endl; // Right shift Bitwise operators.
    
    // 5. Perform operations in : i) Assignment  operators ( =,+=,-=, /=, %=  etc.)
    num1 = 5; // = Assignment operator.
    cout << num1 << endl;
    num1 += 5; // += Assignment operator.
    cout << num1 << endl;
    num1 -= 5; // -= Assignment operator.
    cout << num1 << endl;
    num1 *= 5; // *= Assignment operator.
    cout << num1 << endl;
    num1 /= 5; // /= Assignment operator.
    cout << num1 << endl;
    num1 %= 5; // %= Assignment operator.
    cout << num1 << endl;
    
    num1 &= 2; // &= Assignment operator.
    num1 |= 2; // |= Assignment operator.
    num1 ^= 2; // ^= Assignment operator.
    num1 <<= 2; // <<= Assignment operator.
    num1 >>= 2; // >>= Assignment operator.

    // 6. Perform operations in : i) Logical  operators ( || , &&,  !  etc.)
    if(num1 != 1 && num1 != 9) // && logical operator
    {
        cout <<"Logical 0" << endl;
    }
    
    if(num1 > 0 || num1 < 10) // || logical operator
    {
        cout << "Logical 1" << endl;
    }
    
    if(!(num1 == 5)) // ! logical operator
    {
        cout << "Logical 2" << endl;
    }
    
    
    return 0;
}