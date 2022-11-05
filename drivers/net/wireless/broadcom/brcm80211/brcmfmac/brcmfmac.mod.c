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
	{ 0x9ba164b8, "sdio_writeb" },
	{ 0xfa5275a0, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x90293a21, "cfg80211_cqm_rssi_notify" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xed2e8dd8, "of_property_read_string_helper" },
	{ 0xcccdc877, "wiphy_free" },
	{ 0x7410aba2, "strreplace" },
	{ 0xf0fe903d, "cfg80211_connect_done" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x84f8f1fc, "of_find_node_opts_by_path" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbc2d65c3, "device_release_driver" },
	{ 0xd6748ca5, "irq_of_parse_and_map" },
	{ 0xea124bd1, "gcd" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3d22d4ab, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x1906648e, "brcmu_boardrev_str" },
	{ 0xcd5e5ea9, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x94e2491b, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfcfe9aeb, "cfg80211_report_wowlan_wakeup" },
	{ 0x23327ede, "sdio_claim_irq" },
	{ 0xcc26711b, "no_llseek" },
	{ 0xa9d6c454, "sdio_retune_release" },
	{ 0x87e6ac, "mmc_hw_reset" },
	{ 0xf928a003, "brcmu_pkt_buf_get_skb" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x2cf76f64, "seq_write" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0x2dc01b34, "driver_for_each_device" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9315eaee, "brcmu_pktq_pdeq_tail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2f0bd73a, "of_device_is_compatible" },
	{ 0xc248bed, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0xbcc3bd13, "pm_runtime_allow" },
	{ 0xbf7d7765, "brcmu_pktq_penq" },
	{ 0xfa7a3421, "cfg80211_unregister_wdev" },
	{ 0xab3a5eca, "brcmu_pktq_mdeq" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x151d30d4, "pm_runtime_forbid" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd8311a9f, "skb_unlink" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x975eabf3, "cfg80211_mgmt_tx_status" },
	{ 0x6993f778, "param_ops_string" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x76ff2140, "mmc_wait_for_req" },
	{ 0xfbd5e2cf, "debugfs_create_u32" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x92e78227, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe3902608, "cfg80211_vendor_cmd_reply" },
	{ 0x4e779bf6, "brcmu_pktq_pdeq_match" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdde38b87, "dev_coredumpv" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x52ddbdc, "wiphy_read_of_freq_limits" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x45a01228, "efivar_entry_size" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x1090ef6, "wiphy_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xd367601c, "nla_put" },
	{ 0xc8b7480d, "mmc_set_data_timeout" },
	{ 0xee991a0b, "sdio_readl" },
	{ 0x24b4698, "cfg80211_del_sta_sinfo" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3941eab0, "brcmu_pktq_peek_tail" },
	{ 0x16ec7e7e, "brcmu_pktq_flush" },
	{ 0x9ea29907, "sdio_retune_crc_enable" },
	{ 0x33141874, "cfg80211_rx_mgmt_khz" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xbdd60948, "cfg80211_michael_mic_failure" },
	{ 0xbc963f42, "wiphy_apply_custom_regulatory" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x1de95874, "simple_open" },
	{ 0xb98c5300, "request_firmware_nowait" },
	{ 0x70cb94b1, "cfg80211_ibss_joined" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9dbcd801, "brcmu_dbg_hex_dump" },
	{ 0xbcb3aa08, "of_get_child_by_name" },
	{ 0x6e1ead94, "sdio_readsb" },
	{ 0xdb366aab, "sdio_unregister_driver" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xed39356, "sdio_f0_writeb" },
	{ 0x1b7d0c98, "cfg80211_check_combinations" },
	{ 0xae35bbbd, "ieee80211_get_channel_khz" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xaae4e751, "cfg80211_roamed" },
	{ 0x5df6019e, "cfg80211_put_bss" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0xb9f00651, "__cfg80211_alloc_reply_skb" },
	{ 0x9e2daf0f, "wiphy_register" },
	{ 0x5f189118, "cfg80211_crit_proto_stopped" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xdda4ba3c, "debugfs_create_devm_seqfile" },
	{ 0x2a991dac, "sdio_release_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb22af53d, "cfg80211_classify8021d" },
	{ 0x83eb276e, "of_get_next_child" },
	{ 0xd8480b5e, "efivar_entry_get" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x64de42d3, "cfg80211_ready_on_channel" },
	{ 0x92997ed8, "_printk" },
	{ 0x416d4866, "wiphy_new_nm" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0xdfe036d8, "sdio_f0_readb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xb22f8129, "of_get_property" },
	{ 0xc81758e5, "ether_setup" },
	{ 0x9e303c02, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd63c9cc2, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xabe4d095, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa593bfa8, "brcmu_pktq_penq_head" },
	{ 0xcc60b337, "brcmu_pktq_init" },
	{ 0xb9782b9f, "cfg80211_port_authorized" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x96848186, "scnprintf" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x780c7f55, "cfg80211_register_netdevice" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8593059e, "cfg80211_remain_on_channel_expired" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba9c29b4, "sdio_register_driver" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x329d7b6d, "sdio_memcpy_fromio" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd86332d6, "cfg80211_sched_scan_stopped" },
	{ 0x431b0b69, "sdio_claim_host" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x31e0b1f1, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x941bc2ca, "cfg80211_scan_done" },
	{ 0xfb49d983, "sdio_retune_crc_disable" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x5da4902d, "brcmu_pkt_buf_free_skb" },
	{ 0xe22d1723, "skb_put" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa81e214c, "is_acpi_device_node" },
	{ 0x7bb83659, "sdio_set_block_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0x161a1171, "sdio_disable_func" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb4a2de5c, "sdio_release_host" },
	{ 0x946bb0d6, "sdio_retune_hold_now" },
	{ 0x6d7927eb, "cfg80211_sched_scan_results" },
	{ 0x21e1c9e7, "brcmu_pktq_mlen" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "brcmutil,cfg80211");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4359*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("sdio:c*v02D0dAAE8*");
MODULE_ALIAS("sdio:c*v02D0d4355*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1E79B4EE2688A1E09CEC70C");
