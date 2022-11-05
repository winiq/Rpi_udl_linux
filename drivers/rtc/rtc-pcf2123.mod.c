#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x97adca0e, "__devm_rtc_register_device" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x4c2a2c82, "devm_rtc_allocate_device" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xbf0ef43d, "__devm_regmap_init_spi" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x9330d080, "rtc_update_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x45a55acd, "regmap_write" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:pcf2123");
MODULE_ALIAS("spi:rv2123");
MODULE_ALIAS("spi:rtc-pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,pcf2123C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123C*");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123C*");

MODULE_INFO(srcversion, "6FD4E069A0AE952B933852D");
