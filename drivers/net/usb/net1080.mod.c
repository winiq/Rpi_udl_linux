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
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xda0b7fd5, "usbnet_write_cmd_async" },
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x64495964, "usbnet_write_cmd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbf75d265, "usbnet_read_cmd" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe22d1723, "skb_put" },
	{ 0xb7377510, "skb_push" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xb0b91e01, "skb_copy_expand" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E2E13DA664F28278A0A277");
