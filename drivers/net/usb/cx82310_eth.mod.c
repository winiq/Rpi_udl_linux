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
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xb7377510, "skb_push" },
	{ 0xf9a482f9, "msleep" },
	{ 0x755667d2, "usbnet_get_endpoints" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xdcbcc479, "usb_string" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe22d1723, "skb_put" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x2d3385d3, "system_wq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");

MODULE_INFO(srcversion, "64708575B9B80E7459D6B44");
