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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x2ce37cb5, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x34f913f4, "ieee80211_rts_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0x9d3fe33c, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xde664e8b, "led_classdev_resume" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7a6faa73, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb57b0749, "wiphy_rfkill_start_polling" },
	{ 0xd98ab0be, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xa730c64e, "ieee80211_stop_queues" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xccb45252, "ieee80211_stop_queue" },
	{ 0x6fdee19a, "ieee80211_tx_status" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0x787f9af4, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xe5e30c93, "ieee80211_ctstoself_get" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xaa71940d, "of_get_mac_address" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x584b154, "dma_map_page_attrs" },
	{ 0xeb75ebc, "ieee80211_get_buffered_bc" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd94eb89f, "ieee80211_wake_queue" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x7fc4b79f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcacce21e, "ieee80211_tx_status_ext" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x8a06601b, "led_classdev_suspend" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x73534824, "dma_unmap_page_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x177c185b, "ieee80211_iterate_interfaces" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "mac80211,cfg80211,rfkill");


MODULE_INFO(srcversion, "43318BB69BD27821B8FCF31");
