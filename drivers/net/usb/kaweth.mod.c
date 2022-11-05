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
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5d7062fb, "usb_reset_configuration" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x4f66332e, "__dev_kfree_skb_irq" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe22d1723, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfce6b7f2, "usb_submit_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v03E8p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p11F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C9pB010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v087Dp5704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0951p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v095Ap3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10BDp1427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1342p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D2p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p8005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4000d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2D8AC00C5C7BE9D931AA5E8");
