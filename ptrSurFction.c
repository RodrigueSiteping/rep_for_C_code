#include <stdio.h>
#include <stdlib.h>


void printInt(int x)
{
    printf("printed from printInt: %d\n", x);
}

// la notation void (*func)(void)    déclare le pointeur à une fonction void qui ne prend aucun paramètre


int main() {
    int input1 = 10233;

    // assigne l’adresse de la fonction printInt
    void (*func)(int) = printInt;

    func(input1);
    (*func)(input1);

    exit(EXIT_SUCCESS);
}

/*
#include <stdio.h>
#include <stdlib.h>

//nouveau type d’alias "FuncPtr" d’un pointeur de fonction
typedef void (*FuncPtr)();

void printInt(int x)
{
    printf("printed from printInt: %d\n", x);
}

void printDouble(double x)
{
    printf("printed from printDouble: %f\n", x);
}

int main() {
    int input1 = 10233;
    double input2 = 11.234;

    FuncPtr func1 = printInt;
    FuncPtr func2 = printDouble;

    func1(input1);
    func2(input2);

    exit(EXIT_SUCCESS);
}

*/


// Utiliser le tableau de pointeurs de fonctions 
//pour implémenter la fonctionnalité de programmation générique de type

/*
#include <stdio.h>
#include <stdlib.h>

enum TYPE {INTEGER, DOUBLE, INVALID};

#define typename(x) _Generic((x), \
          int: INTEGER, \
        double: DOUBLE, \
      default: INVALID)

typedef void (*FuncPtr)();

void printInt(int x)
{
    printf("printed from printInt: %d\n", x);
}

void printDouble(double x)
{
    printf("printed from printDouble: %f\n", x);
}

int main() {
    int input1 = 10233;
    double input2 = 11.234;

    FuncPtr func_ptrs[] = {printInt, printDouble};

    switch (typename(input1)) {
        case INTEGER: func_ptrs[INTEGER](input1); break;
        case DOUBLE: func_ptrs[DOUBLE](input1); break;
        case INVALID: printf("No corresponding type found!\n");
        default: break;
    }

    switch (typename(input2)) {
        case INTEGER: func_ptrs[INTEGER](input2); break;
        case DOUBLE: func_ptrs[DOUBLE](input2); break;
        case INVALID: printf("No corresponding type found!\n");
        default: break;
    }

    exit(EXIT_SUCCESS);
}

*/