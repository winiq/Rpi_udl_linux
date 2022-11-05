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
	{ 0x4c2a2c82, "devm_rtc_allocate_device" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x54f59995, "spi_write_then_read" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "850484904F771491B0E83DC");
