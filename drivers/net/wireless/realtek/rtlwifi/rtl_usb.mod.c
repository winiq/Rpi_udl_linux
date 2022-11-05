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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x316940c1, "ieee80211_rx_napi" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x58feb453, "rtl_deinit_deferred_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xe00fad9, "rtl_deinit_core" },
	{ 0x163df996, "usb_get_from_anchor" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b48f676, "rtl_init_core" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x55526400, "rtl_action_proc" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0xaa378cba, "rtl_init_rx_config" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x6db3ba37, "rtl_update_beacon_work_callback" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x59da6f74, "ieee80211_tx_status_irqsafe" },
	{ 0x39b5dc4, "rtl_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x7acc43bf, "_rtl_dbg_print" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x31344036, "rtl_beacon_statistic" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "7047DB6E7BDCFD75C67904A");
