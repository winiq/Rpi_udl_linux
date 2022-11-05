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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6e4a9516, "usbnet_cdc_unbind" },
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x6daba455, "usbnet_generic_cdc_bind" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x6ea456cf, "usbnet_stop" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x2671ae31, "usbnet_start_xmit" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8fa0a11a, "usbnet_tx_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x6bfbee5c, "usb_driver_release_interface" },
	{ 0x67084dce, "usbnet_open" },
	{ 0xd5225981, "usb_interrupt_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd9a82f7e, "eth_mac_addr" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v238Bp*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "B9BEC9CBC3FE3E6B3DE5332");
