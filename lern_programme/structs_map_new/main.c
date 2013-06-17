#include "defined.h"
int main(int argc, char *argv[])
{
    if(argc>=2){
        printf("Hallo!\n");
        init();
        putintable_inlast("Hallo", 0);
        putintable_inlast("xxx", 0);
        print_field(field, 0, atoi(argv[1]),4,20);
        printlastrow(0);
    }
    return 0;
}
