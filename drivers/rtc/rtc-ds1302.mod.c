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
	{ 0x38e377f1, "devm_rtc_device_register" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x54f59995, "spi_write_then_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ds1302");
MODULE_ALIAS("of:N*T*Cmaxim,ds1302");
MODULE_ALIAS("of:N*T*Cmaxim,ds1302C*");

MODULE_INFO(srcversion, "419C4BA2960E140988A7BFC");
