cmd_fs/ecryptfs/ecryptfs.ko := aarch64-linux-gnu-ld -r  -EL  -maarch64elf -z noexecstack   --build-id=sha1  -T scripts/module.lds -o fs/ecryptfs/ecryptfs.ko fs/ecryptfs/ecryptfs.o fs/ecryptfs/ecryptfs.mod.o;  true