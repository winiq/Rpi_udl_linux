cmd_net/bluetooth/bluetooth_6lowpan.ko := aarch64-linux-gnu-ld -r  -EL  -maarch64elf -z noexecstack   --build-id=sha1  -T scripts/module.lds -o net/bluetooth/bluetooth_6lowpan.ko net/bluetooth/bluetooth_6lowpan.o net/bluetooth/bluetooth_6lowpan.mod.o;  true