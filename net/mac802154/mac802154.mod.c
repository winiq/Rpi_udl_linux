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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb28e2bbb, "ieee802154_hdr_push" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x89a925ec, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe0e379dc, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x1467e736, "crypto_alloc_sync_skcipher" },
	{ 0xd90c34a1, "ieee802154_hdr_pull" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xeb0d3a82, "bpf_trace_run1" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0x670f8cae, "netif_receive_skb" },
	{ 0xa60175a1, "wpan_phy_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0x230dc761, "ieee802154_hdr_peek" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x88b02222, "crypto_aead_encrypt" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x59164356, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xad1d9417, "crypto_aead_setkey" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0xd81fb8f6, "crypto_skcipher_decrypt" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0x738d6666, "wpan_phy_unregister" },
	{ 0x59298a1b, "ieee802154_hdr_peek_addrs" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x1aeb45b5, "crypto_skcipher_setkey" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x893dd312, "crypto_aead_decrypt" },
	{ 0x8751e98a, "crypto_aead_setauthsize" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x3d153805, "crypto_alloc_aead" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0x24753992, "dev_alloc_name" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb73864bd, "bpf_trace_run4" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ieee802154,crc-ccitt");


MODULE_INFO(srcversion, "92EA7E4D3E918800A0CF3D6");
