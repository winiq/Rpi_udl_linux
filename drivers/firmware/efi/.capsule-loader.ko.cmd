cmd_drivers/firmware/efi/capsule-loader.ko := aarch64-linux-gnu-ld -r  -EL  -maarch64elf -z noexecstack   --build-id=sha1  -T scripts/module.lds -o drivers/firmware/efi/capsule-loader.ko drivers/firmware/efi/capsule-loader.o drivers/firmware/efi/capsule-loader.mod.o;  true