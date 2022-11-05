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
	{ 0x6c17b689, "skb_queue_head" },
	{ 0xee9ef003, "ieee80211_rx_irqsafe" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc313ff9a, "_dev_printk" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9d3fe33c, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd3efdf68, "__ieee80211_get_assoc_led_name" },
	{ 0xd98ab0be, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xd8311a9f, "skb_unlink" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xccb45252, "ieee80211_stop_queue" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0x787f9af4, "ieee80211_free_txskb" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xb7c0f443, "sort" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x95c2a4cb, "__ieee80211_get_rx_led_name" },
	{ 0xa916b694, "strnlen" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x59da6f74, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x1efe26c5, "__ieee80211_get_tx_led_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd94eb89f, "ieee80211_wake_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x662138fb, "__ieee80211_get_radio_led_name" },
	{ 0x7fc4b79f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x444987d3, "regulatory_hint" },
	{ 0x9263715b, "ieee80211_beacon_loss" },
	{ 0x4829a47e, "memcpy" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe22d1723, "skb_put" },
};

MODULE_INFO(depends, "mac80211,cfg80211,crc-ccitt");


MODULE_INFO(srcversion, "D33AF8A062178A27B75B2CF");
