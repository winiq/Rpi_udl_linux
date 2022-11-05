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
	{ 0x38e377f1, "devm_rtc_device_register" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:isl12022");
MODULE_ALIAS("of:N*T*Cisl,isl12022");
MODULE_ALIAS("of:N*T*Cisl,isl12022C*");
MODULE_ALIAS("of:N*T*Cisil,isl12022");
MODULE_ALIAS("of:N*T*Cisil,isl12022C*");

MODULE_INFO(srcversion, "429660F7D8705BCDB3979C0");
