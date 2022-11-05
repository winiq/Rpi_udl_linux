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
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x55601ffa, "dvb_frontend_detach" },
	{ 0xdcb764ad, "memset" },
	{ 0xd5da612d, "param_ops_short" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x18e2e423, "i2c_new_client_device" },
	{ 0xb57e7350, "rc_keydown" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x6587c97e, "module_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbf0a9e63, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "dvb-usb,dvb-core");

MODULE_ALIAS("usb:v04B4p2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p2104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3011pB012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD660d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3034p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD481d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD482d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp3100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1FE1p5456d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpD220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD483d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD484d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD662d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "78E015AB3A9D3F39C097660");
