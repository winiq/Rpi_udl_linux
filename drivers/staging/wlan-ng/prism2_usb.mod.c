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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcccdc877, "wiphy_free" },
	{ 0xf0fe903d, "cfg80211_connect_done" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x5992b1a7, "netdev_notice" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3d22d4ab, "cfg80211_inform_bss_data" },
	{ 0x664d79a6, "usb_init_urb" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x43ccc6cf, "usb_get_status" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x1090ef6, "wiphy_unregister" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x9166fada, "strncpy" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xb7377510, "skb_push" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xae35bbbd, "ieee80211_get_channel_khz" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xaae4e751, "cfg80211_roamed" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0x5df6019e, "cfg80211_put_bss" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x9e2daf0f, "wiphy_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0x92997ed8, "_printk" },
	{ 0x416d4866, "wiphy_new_nm" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0xc81758e5, "ether_setup" },
	{ 0x9e303c02, "cfg80211_disconnected" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x941bc2ca, "cfg80211_scan_done" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v04BBp0922d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp3642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DEp7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0967p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F3p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v50C2p4013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C02p14EAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap168Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p6106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB2p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9016p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0543p0F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Cp1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "34307853ACAFC9B8874F824");
