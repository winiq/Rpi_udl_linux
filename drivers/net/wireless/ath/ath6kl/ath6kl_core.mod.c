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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcccdc877, "wiphy_free" },
	{ 0xf0fe903d, "cfg80211_connect_done" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3d22d4ab, "cfg80211_inform_bss_data" },
	{ 0xe23d9cd5, "cfg80211_conn_failed" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xef265f27, "cfg80211_chandef_create" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xfa7a3421, "cfg80211_unregister_wdev" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdd2f7d1, "cfg80211_check_station_change" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x975eabf3, "cfg80211_mgmt_tx_status" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xfe2f44df, "cfg80211_pmksa_candidate_notify" },
	{ 0xdcb764ad, "memset" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xa4f13353, "cfg80211_get_bss" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x1090ef6, "wiphy_unregister" },
	{ 0x24b4698, "cfg80211_del_sta_sinfo" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb7377510, "skb_push" },
	{ 0x33141874, "cfg80211_rx_mgmt_khz" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xbdd60948, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x70cb94b1, "cfg80211_ibss_joined" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3e9d2ee2, "cfg80211_get_drvinfo" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xae35bbbd, "ieee80211_get_channel_khz" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0x7f47b884, "cfg80211_ch_switch_notify" },
	{ 0xaae4e751, "cfg80211_roamed" },
	{ 0x5df6019e, "cfg80211_put_bss" },
	{ 0x9e2daf0f, "wiphy_register" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x64de42d3, "cfg80211_ready_on_channel" },
	{ 0x92997ed8, "_printk" },
	{ 0x416d4866, "wiphy_new_nm" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0x43519f78, "of_find_compatible_node" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xb22f8129, "of_get_property" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9e303c02, "cfg80211_disconnected" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x8a729b3d, "netdev_set_default_ethtool_ops" },
	{ 0xd63c9cc2, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x444987d3, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x96848186, "scnprintf" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x780c7f55, "cfg80211_register_netdevice" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x8593059e, "cfg80211_remain_on_channel_expired" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xd86332d6, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x941bc2ca, "cfg80211_scan_done" },
	{ 0xe22d1723, "skb_put" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbd432966, "cfg80211_cqm_txe_notify" },
	{ 0x6d7927eb, "cfg80211_sched_scan_results" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "CC524CD688F72B103591012");
