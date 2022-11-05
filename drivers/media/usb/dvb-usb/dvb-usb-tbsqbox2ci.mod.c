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
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x58a4bc8, "dvb_usb_device_exit" },
	{ 0xfae8a41b, "dvb_usb_device_init" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd5da612d, "param_ops_short" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6cdf2f0, "dvb_ca_en50221_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x272915df, "dvb_ca_en50221_init" },
};

MODULE_INFO(depends, "dvb-usb,dvb-core");

MODULE_ALIAS("usb:v734Cp5980d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "272DC24AD76B6521EC69215");
