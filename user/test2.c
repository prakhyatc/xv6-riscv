#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(int argc, char *argv[])
{
    char *pathForTheFile = "README";
    uint8 key = 25;  
    decrypt(pathForTheFile,key);
    return 0;
}