cmd_crypto/chacha20poly1305.ko := aarch64-linux-gnu-ld -r  -EL  -maarch64elf -z noexecstack   --build-id=sha1  -T scripts/module.lds -o crypto/chacha20poly1305.ko crypto/chacha20poly1305.o crypto/chacha20poly1305.mod.o;  true