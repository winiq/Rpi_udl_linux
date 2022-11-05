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
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xca8bfa7f, "netif_tx_stop_all_queues" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xef37ae62, "usb_altnum_to_altsetting" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "EDC16BF11C212DE839558B9");
