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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x851372a5, "devm_rtc_nvmem_register" },
	{ 0x97adca0e, "__devm_rtc_register_device" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4c2a2c82, "devm_rtc_allocate_device" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x9330d080, "rtc_update_irq" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x45a55acd, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf85263");
MODULE_ALIAS("of:N*T*Cnxp,pcf85263C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf85363");
MODULE_ALIAS("of:N*T*Cnxp,pcf85363C*");

MODULE_INFO(srcversion, "FC783EC628F077D1A95D4BD");
