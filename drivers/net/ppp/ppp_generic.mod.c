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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x6c17b689, "skb_queue_head" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfb39f4af, "bpf_prog_create" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0x2bce416, "device_destroy" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x6994a440, "__register_chrdev" },
	{ 0x2d27c725, "bpf_prog_destroy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x507945b0, "__put_net" },
	{ 0x2549883d, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xce18fcef, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xec9030df, "netdev_printk" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0xe38b0aff, "device_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa5c5220d, "fput" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6587c97e, "module_put" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0xf66193d7, "__dev_get_by_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x5240024d, "skb_pull_rcsum" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x34df7d1d, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x89a9df85, "fget" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x265fe5e, "class_destroy" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xbad97937, "__class_create" },
	{ 0x6405dcd3, "slhc_toss" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "681473E6E820BABC39E775D");
