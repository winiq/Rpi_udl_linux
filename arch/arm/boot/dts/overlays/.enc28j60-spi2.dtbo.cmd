cmd_arch/arm64/boot/dts/overlays/enc28j60-spi2.dtbo := mkdir -p arch/arm64/boot/dts/overlays/ ; aarch64-linux-gnu-gcc -E -Wp,-MMD,arch/arm64/boot/dts/overlays/.enc28j60-spi2.dtbo.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/overlays/.enc28j60-spi2.dtbo.dts.tmp arch/arm64/boot/dts/overlays/enc28j60-spi2-overlay.dts ; ./scripts/dtc/dtc -@ -H epapr -O dtb -o arch/arm64/boot/dts/overlays/enc28j60-spi2.dtbo -b 0 -i arch/arm64/boot/dts/overlays/ -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -Wno-interrupts_property -Wno-label_is_string -Wno-reg_format -Wno-pci_device_bus_num -Wno-i2c_bus_reg -Wno-spi_bus_reg -Wno-avoid_default_addr_size -d arch/arm64/boot/dts/overlays/.enc28j60-spi2.dtbo.d.dtc.tmp arch/arm64/boot/dts/overlays/.enc28j60-spi2.dtbo.dts.tmp ; cat arch/arm64/boot/dts/overlays/.enc28j60-spi2.dtbo.d.pre.tmp arch/arm64/boot/dts/overlays/.enc28j60-spi2.dtbo.d.dtc.tmp > arch/arm64/boot/dts/overlays/.enc28j60-spi2.dtbo.d

source_arch/arm64/boot/dts/overlays/enc28j60-spi2.dtbo := arch/arm64/boot/dts/overlays/enc28j60-spi2-overlay.dts

deps_arch/arm64/boot/dts/overlays/enc28j60-spi2.dtbo := \

arch/arm64/boot/dts/overlays/enc28j60-spi2.dtbo: $(deps_arch/arm64/boot/dts/overlays/enc28j60-spi2.dtbo)

$(deps_arch/arm64/boot/dts/overlays/enc28j60-spi2.dtbo):
