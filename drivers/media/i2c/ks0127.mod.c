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
	{ 0x826655e4, "param_ops_int" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:ks0127");
MODULE_ALIAS("i2c:ks0127b");
MODULE_ALIAS("i2c:ks0122s");

MODULE_INFO(srcversion, "17F15FDB08C65080409A633");
