//
// Copyright (c) 2015 Zhang Hai <Dreaming.in.Code.ZH@Gmail.com>
// All Rights Reserved.
//

#include <stdio.h>
#include <stdlib.h>

#include "lexical_parser.h"

int main() {
    char *input = "0x1234567890abcdefABCDEF";
    input_element_div(&input);
    printf("Hello, World!\n");
    return EXIT_SUCCESS;
}
