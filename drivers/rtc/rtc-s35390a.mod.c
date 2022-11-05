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
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x9330d080, "rtc_update_irq" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x97adca0e, "__devm_rtc_register_device" },
	{ 0x4c2a2c82, "devm_rtc_allocate_device" },
	{ 0x4a6191bd, "devm_i2c_new_dummy_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cs35390a");
MODULE_ALIAS("of:N*T*Cs35390aC*");
MODULE_ALIAS("of:N*T*Csii,s35390a");
MODULE_ALIAS("of:N*T*Csii,s35390aC*");
MODULE_ALIAS("i2c:s35390a");

MODULE_INFO(srcversion, "200E487788334C2F07F5BD3");
