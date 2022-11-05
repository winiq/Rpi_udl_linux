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
	{ 0xa6c96402, "_dev_err" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x38e377f1, "devm_rtc_device_register" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x54f59995, "spi_write_then_read" },
	{ 0x80ca5026, "_bin2bcd" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ds1390");
MODULE_ALIAS("of:N*T*Cdallas,ds1390");
MODULE_ALIAS("of:N*T*Cdallas,ds1390C*");

MODULE_INFO(srcversion, "F0A95B02D38F072DD395638");
