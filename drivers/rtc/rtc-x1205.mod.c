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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0x38e377f1, "devm_rtc_device_register" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf9a482f9, "msleep" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xba1aa9c7, "device_remove_file" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxircom,x1205");
MODULE_ALIAS("of:N*T*Cxircom,x1205C*");
MODULE_ALIAS("i2c:x1205");

MODULE_INFO(srcversion, "EFEB5FD6BA3A18EF728DA33");
