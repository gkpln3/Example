#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint32_t magic;
} elf_header_t;

int main(int argc, char* argv[]) {
    elf_header_t header;

    FILE* file = fopen("file.out", "rb");
    fread(&header, sizeof(header), 1, file);
    return 0;
}