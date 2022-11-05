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
	{ 0x6e18b435, "register_netdevice" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc463babd, "iw_handler_set_thrspy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xaa38dcca, "proc_create_seq_private" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x8b45f45a, "proc_create_single_data" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0xd73f9e36, "lib80211_crypt_delayed_deinit" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb7e25bd9, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x2c2a46a, "proc_remove" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x386fff31, "wireless_spy_update" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x8b2b24a2, "proc_mkdir" },
	{ 0x9f64a537, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8646f58c, "iw_handler_get_spy" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0xc935405a, "wireless_send_event" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb7377510, "skb_push" },
	{ 0x7f8095, "dev_close" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x24d273d1, "add_timer" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x82baa22e, "init_net" },
	{ 0x4b7eded8, "dev_open" },
	{ 0x6587c97e, "module_put" },
	{ 0xdd0b7b55, "lib80211_get_crypto_ops" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe9104552, "netif_device_attach" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0x334c4a39, "eth_header_cache_update" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x74878972, "iw_handler_get_thrspy" },
	{ 0x92997ed8, "_printk" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xc81758e5, "ether_setup" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x2f2a1413, "proc_create_data" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8fb2234, "iw_handler_set_spy" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xef10827a, "eth_header_cache" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcdd04887, "eth_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "81B45EEC2904ED70A4BD09F");
