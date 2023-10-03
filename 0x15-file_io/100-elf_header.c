#include "main.h"

void elf_check(unsigned char *elf_id);
void print_magic(unsigned char *elf_id);
void print_class(unsigned char *elf_id);
void print_data(unsigned char *elf_id);
void print_version(unsigned char *elf_id);
void print_osabi(unsigned char *elf_id);
void print_type(unsigned int elf_type, unsigned char *elf_id);
void print_entry(unsigned long int elf_entry, unsigned char *elf_id);
void elf_close(int elf);
void print_abi(unsigned char *elf_id);

/**
 * elf_check - checks for ELF files
 * @elf_id: pointer to array
 *
 * Description: exit code 98 for non ELF files
 */
void elf_check(unsigned char *elf_id)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_id[i] != 127 &&
				elf_id[i] != 'E' &&
				elf_id[i] != 'L' &&
				elf_id[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file.\n");
			exit(98);
		}
	}
}
/**
 * print_magic - prints magic num of ELF file
 * @elf_id: pointer to array
 *
 * Description: magic numbers
 */
void print_magic(unsigned char *elf_id)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_id[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_class - prints class of ELF file
 * @elf_id: pointer to array
 *
 */
void print_class(unsigned char *elf_id)
{
	printf(" Class:			");

	switch (elf_id[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_id[EI_CLASS]);
	}
}
/**
 * print_data - prints ELF data
 * @elf_id: array pointer
 *
 */
void print_data(unsigned char *elf_id)
{
	printf(" Data:                 ");

	switch (elf_id[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_id[EI_DATA]);
	}
}
/**
 * print_version - prints version
 * @elf_id: array pointer
 *
 */
void print_version(unsigned char *elf_id)
{
	printf(" Data:                 %d", elf_id[EI_VERSION]);

	switch (elf_id[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_osabi - prints OS/ABI
 * @elf_id: array pointer
 */
void print_osabi(unsigned char *elf_id)
{
	printf(" OS/ABI:                 ");

	switch (elf_id[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FREEBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_id[EI_OSABI]);
	}
}
/**
 * print_type - prints type of ELF file
 * @elf_type: file type
 * @elf_id: array pointer
 *
 */
void print_type(unsigned int elf_type, unsigned char *elf_id)
{
	if (elf_id[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf(" Type:                 ");

	switch (elf_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_type);
	}
}
/**
 * print_abi - prints ABI version
 * @elf_id: pointer to array
 *
 */
void print_abi(unsigned char *elf_id)
{
	printf(" ABI Version:                 %d\n", elf_id[EI_ABIVERSION]);
}
