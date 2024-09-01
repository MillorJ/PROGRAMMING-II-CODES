#include <stdio.h>
#include "myheader.h"

int main()
{
    TestStruct X = {"John", 1224};
    printf("%s %d", X.x, X.id);
}
