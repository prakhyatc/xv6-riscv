#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(2, "Usage: encrypt <file_path> <key>\n");
        exit(1);
    }

    char *file_path = argv[1];
    int key = atoi(argv[2]);

    // Call the encrypt system call
    int result = encrypt(file_path, key);
    if (result == -1) {
        fprintf(2, "Encryption failed for file: %s\n", file_path);
    } else {
        printf("File %s encrypted successfully.\n", file_path);
    }

    exit(0);
}
