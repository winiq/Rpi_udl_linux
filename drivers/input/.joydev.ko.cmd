cmd_drivers/input/joydev.ko := aarch64-linux-gnu-ld -r  -EL  -maarch64elf -z noexecstack   --build-id=sha1  -T scripts/module.lds -o drivers/input/joydev.ko drivers/input/joydev.o drivers/input/joydev.mod.o;  true