#include "main.h"
#include <stdio.h>
#include <elf.h>
/**
 * display_error - it displays the error messages
 * @message:- error message passed
 */
void display_error(const char* message) {
  fprintf(stderr, "%s\n", message);
  exit(98);
}
/**
 * display_elf_header - a function that dispalys the filename
 * @filename:- the name of the file
 */
void display_elf_header(const char* filename) {
  int fd = open(filename, O_RDONLY);
  Elf64_Ehdr elf_header;
  if (fd == -1) {
    perror("Failed to open the file");
    exit(EXIT_FAILURE);
  }

/*  Elf64_Ehdr elf_header;*/
  if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
    perror("Failed to read the ELF header");
    close(fd);
    exit(EXIT_FAILURE);
  }

  printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1],
  elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
  printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
  printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
  printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
  printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
  printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
  printf("Type: %d\n", elf_header.e_type);
  printf("Entry point address: %lx\n", elf_header.e_entry);

  close(fd);
}
/** main - this is the main function
 * @argc :- the is the argument count
 * @argv[] :- this is the argument variable
 * Return ;_ it returns 0 on success
 */
int main(int argc, char* argv[]) {
  if (argc != 2) {
  display_error("Usage: elf_header elf_filename");
  }

  display_elf_header(argv[1]);

  return 0;
}
