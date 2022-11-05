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
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x821a8c68, "register_candev" },
	{ 0x78305fec, "alloc_can_err_skb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2dc01b34, "driver_for_each_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0x46a5c76c, "can_bus_off" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x41364173, "close_candev" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0x3f770116, "alloc_candev_mqs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2fc6088a, "free_candev" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x10feca47, "can_change_mtu" },
	{ 0xc09d7da6, "can_change_state" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x7088be82, "unregister_candev" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x8c78196, "alloc_can_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x26c10440, "open_candev" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x6215280f, "alloc_canfd_skb" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x4378af6a, "can_get_echo_skb" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xffb35a2a, "can_put_echo_skb" },
	{ 0xc8c38beb, "can_free_echo_skb" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "96F8A3828904BF9AED801C6");
