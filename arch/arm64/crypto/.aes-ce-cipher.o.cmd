cmd_arch/arm64/crypto/aes-ce-cipher.o := aarch64-linux-gnu-ld  -EL  -maarch64elf -z noexecstack     -r -o arch/arm64/crypto/aes-ce-cipher.o arch/arm64/crypto/aes-ce-core.o arch/arm64/crypto/aes-ce-glue.o