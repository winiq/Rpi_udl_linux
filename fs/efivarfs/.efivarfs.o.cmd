cmd_fs/efivarfs/efivarfs.o := aarch64-linux-gnu-ld  -EL  -maarch64elf -z noexecstack     -r -o fs/efivarfs/efivarfs.o fs/efivarfs/inode.o fs/efivarfs/file.o fs/efivarfs/super.o
