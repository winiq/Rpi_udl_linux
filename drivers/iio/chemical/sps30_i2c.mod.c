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
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x9c5d5b94, "crc8" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x5b2228d1, "sps30_probe" },
	{ 0xaa8106bc, "crc8_populate_msb" },
};

MODULE_INFO(depends, "crc8,sps30");

MODULE_ALIAS("of:N*T*Csensirion,sps30");
MODULE_ALIAS("of:N*T*Csensirion,sps30C*");
MODULE_ALIAS("i2c:sps30");

MODULE_INFO(srcversion, "71AFB172DF3728D0D64D4D4");
