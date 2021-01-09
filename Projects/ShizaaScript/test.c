#include "tinyexpr.h"
#include<stdio.h>
#include "test.h"

void eval_func(void){
    printf("%f\n", te_interp("2+4*3-6/(3+6)*2-5+2", 0));
}
