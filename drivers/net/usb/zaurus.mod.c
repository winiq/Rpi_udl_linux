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
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0x6e4a9516, "usbnet_cdc_unbind" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0x6daba455, "usbnet_generic_cdc_bind" },
	{ 0xe22d1723, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xb0b91e01, "skb_copy_expand" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v22B8p6027d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00in*");

MODULE_INFO(srcversion, "32AC32B4E685D19519EDBAE");
