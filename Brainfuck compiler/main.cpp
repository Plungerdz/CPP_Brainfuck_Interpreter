#include <iostream>
#include "compiler.h"

Compiler* compy =  new Compiler();

int main()
{
    compy->execute_file("programs/test.bf");
}
