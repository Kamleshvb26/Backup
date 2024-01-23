#include <stdio.h>
#include "header.h"

int decodeSymbol(struct SymbolDecoder *symDec, int numberOfSymbols, char symbol)
{
    for (int i = 0; i < numberOfSymbols; i++)
    {

        if (symDec[i].symbol == symbol) // if symbol matches then return its value
        {
            return symDec[i].value;
        }
    }
    return -1;
}

int accept(struct SymbolDecoder *symbols, int numberOfSymbols, char symbol, int value)
{
    // Assign symbol and values

    symbols[numberOfSymbols].symbol = symbol;
    symbols[numberOfSymbols].value = value;
}

int validate(struct SymbolDecoder *symbols, int numberOfSymbols, char symbol, int value)
{
    if (value < 0)
    {
        return 0;
    }

    // iterate through array of structure
    for (int i = 0; i < numberOfSymbols; i++)
    {
        if (symbols[i].symbol == symbol)
        {
            return 0;
        }
    }
    return 1;
}
