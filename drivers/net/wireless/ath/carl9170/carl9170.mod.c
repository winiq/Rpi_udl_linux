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
	{ 0x316940c1, "ieee80211_rx_napi" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2ce37cb5, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x163df996, "usb_get_from_anchor" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9d3fe33c, "ieee80211_beacon_get_tim" },
	{ 0xc6aaa6cc, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xd3efdf68, "__ieee80211_get_assoc_led_name" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xa730c64e, "ieee80211_stop_queues" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xccb45252, "ieee80211_stop_queue" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0x787f9af4, "ieee80211_free_txskb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x646ceca5, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xc00552c0, "ath_is_mybeacon" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x4f66332e, "__dev_kfree_skb_irq" },
	{ 0xc54a895e, "ieee80211_sta_block_awake" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xb98c5300, "request_firmware_nowait" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0xc7548d6f, "ath_reg_notifier_apply" },
	{ 0xe6765bfa, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x1fc1b597, "usb_queue_reset_device" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xf98605d5, "ath_regd_get_band_ctl" },
	{ 0xa916b694, "strnlen" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x59da6f74, "ieee80211_tx_status_irqsafe" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x6bfbee5c, "usb_driver_release_interface" },
	{ 0xc614a60b, "ieee80211_get_tx_rates" },
	{ 0xc5933243, "input_free_device" },
	{ 0x31f94d90, "ieee80211_find_sta" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x1efe26c5, "__ieee80211_get_tx_led_name" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc8864b0d, "usb_get_intf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd94eb89f, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xce1473b1, "ieee80211_restart_hw" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x444987d3, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xa5288ee4, "usb_ifnum_to_if" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x86b13d2a, "usb_unpoison_anchored_urbs" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x1bc37f54, "usb_put_intf" },
	{ 0x62f57635, "ieee80211_stop_tx_ba_session" },
	{ 0x58dba3ed, "ieee80211_queue_stopped" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "mac80211,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7CB51F36064CB015322C5AA");
