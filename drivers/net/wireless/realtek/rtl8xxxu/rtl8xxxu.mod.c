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
	{ 0x2d3385d3, "system_wq" },
	{ 0xee9ef003, "ieee80211_rx_irqsafe" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x664d79a6, "usb_init_urb" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xa730c64e, "ieee80211_stop_queues" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x646ceca5, "ieee80211_wake_queues" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x56a62269, "ieee80211_ave_rssi" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x59da6f74, "ieee80211_tx_status_irqsafe" },
	{ 0x92997ed8, "_printk" },
	{ 0x31f94d90, "ieee80211_find_sta" },
	{ 0x15a37cf3, "cfg80211_calculate_bitrate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb2a7131f, "ieee80211_start_tx_ba_session" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0108d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3319d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0109d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB720d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pA611d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "198F53DF7C936951681A44F");
