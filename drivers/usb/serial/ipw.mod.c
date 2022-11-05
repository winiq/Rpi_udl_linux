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
	{ 0xf514cb90, "usb_wwan_write" },
	{ 0xb87a5c2e, "usb_wwan_port_remove" },
	{ 0xbfb1a475, "usb_wwan_port_probe" },
	{ 0x4acd7187, "usb_serial_deregister_drivers" },
	{ 0x6d12bd23, "usb_serial_register_drivers" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x4abd5a65, "usb_wwan_open" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x50bb94b0, "usb_wwan_close" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x156b6ca9, "usb_control_msg" },
};

MODULE_INFO(depends, "usb_wwan,usbserial");

MODULE_ALIAS("usb:v0BC3p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "073F14A87FCD0A3F94EF4C3");
