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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xadcac529, "driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xee858c6d, "fbtft_dbg_hex" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x846fa42e, "fbtft_probe_common" },
	{ 0xed3bd81d, "fbtft_remove_common" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Cdisplaytronic,fb_agm1264k-fl");
MODULE_ALIAS("of:N*T*Cdisplaytronic,fb_agm1264k-flC*");

MODULE_INFO(srcversion, "B33A6B45E95914700EA2123");