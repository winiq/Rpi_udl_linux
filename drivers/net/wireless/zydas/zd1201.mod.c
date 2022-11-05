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
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xe9104552, "netif_device_attach" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xc935405a, "wireless_send_event" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C77AF31867BF74453699E10");
