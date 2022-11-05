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
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18fd61e, "ieee80211_get_num_supported_channels" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xcccdc877, "wiphy_free" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf0fe903d, "cfg80211_connect_done" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2310adee, "ieee80211_bss_get_elem" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x3d22d4ab, "cfg80211_inform_bss_data" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x8a3ceaf6, "netif_rx_any_context" },
	{ 0xc710b300, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa4f13353, "cfg80211_get_bss" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x1090ef6, "wiphy_unregister" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xbdd60948, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x1de95874, "simple_open" },
	{ 0xb98c5300, "request_firmware_nowait" },
	{ 0x70cb94b1, "cfg80211_ibss_joined" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xae35bbbd, "ieee80211_get_channel_khz" },
	{ 0xe9104552, "netif_device_attach" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0x5df6019e, "cfg80211_put_bss" },
	{ 0x9e2daf0f, "wiphy_register" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x416d4866, "wiphy_new_nm" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9e303c02, "cfg80211_disconnected" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x444987d3, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x941bc2ca, "cfg80211_scan_done" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "BE6A5964F84DAD98B7D9818");
