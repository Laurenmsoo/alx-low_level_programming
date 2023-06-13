#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>

#define ELF_HEADER_SIZE 64

typedef struct {
    unsigned char magic[4];
    uint8_t class;
    uint8_t data;
    uint8_t version;
    uint8_t os_abi;
    uint8_t abi_version;
    unsigned char padding[7];
    uint16_t type;
    uint64_t entry_point;
} ElfHeader;

void print_error(const char* error_message) {
    fprintf(stderr, "Error: %s\n", error_message);
    exit(98);
}

void display_elf_header(const ElfHeader* header) {
    printf("Magic: %02X %02X %02X %02X\n", header->magic[0], header->magic[1], header->magic[2], header->magic[3]);
    printf("Class:                             %u\n", header->class);
    printf("Data:                              %u\n", header->data);
    printf("Version:                           %u\n", header->version);
    printf("OS/ABI:                            %u\n", header->os_abi);
    printf("ABI Version:                       %u\n", header->abi_version);
    printf("Type:                              %u\n", header->type);
    printf("Entry point address:               0x%016lx\n", header->entry_point);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    const char* filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Failed to open file");
    }

    ElfHeader header;
    ssize_t bytes_read = read(fd, &header, ELF_HEADER_SIZE);
    if (bytes_read != ELF_HEADER_SIZE) {
        print_error("Failed to read ELF header");
    }

    if (header.magic[0] != 0x7f || header.magic[1] != 'E' || header.magic[2] != 'L' || header.magic[3] != 'F') {
        print_error("Not an ELF file");
    }

    display_elf_header(&header);

    close(fd);
    return 0;
}
