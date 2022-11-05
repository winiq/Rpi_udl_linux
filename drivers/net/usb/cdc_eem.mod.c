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
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0xf401a37c, "usbnet_device_suggests_idle" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xb7377510, "skb_push" },
	{ 0xe22d1723, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xb0b91e01, "skb_copy_expand" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "6E94BB6D70A70DE46C39C66");
