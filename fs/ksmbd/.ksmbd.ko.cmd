cmd_fs/ksmbd/ksmbd.ko := aarch64-linux-gnu-ld -r  -EL  -maarch64elf -z noexecstack   --build-id=sha1  -T scripts/module.lds -o fs/ksmbd/ksmbd.ko fs/ksmbd/ksmbd.o fs/ksmbd/ksmbd.mod.o;  true
