
//structure to store mystical symbols ans its values 
struct  SymbolDecoder
{
    char symbol;
    int value;
};

//Function to decode symbol 
int decodeSymbol(struct SymbolDecoder *, int , char );

//Function to accept input 
int accept(struct SymbolDecoder *, int , char ,int );

//Function to validate input 
int validate(struct SymbolDecoder *, int , char ,int );