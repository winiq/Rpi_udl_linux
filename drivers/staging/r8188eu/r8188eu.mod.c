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
	{ 0x6e18b435, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x528d4794, "find_vpid" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xdc0815f1, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xca8bfa7f, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xc935405a, "wireless_send_event" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0xb7377510, "skb_push" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x652032cb, "mac_pton" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xde8b39d6, "kill_pid" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3e367d17, "flush_signals" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xe9104552, "netif_device_attach" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x24753992, "dev_alloc_name" },
	{ 0xcf2a6966, "up" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x760a0f4f, "yield" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApFFEFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p18F0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB811d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "75F846AF5424F7373D4F485");
