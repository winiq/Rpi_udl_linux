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
	{ 0x826655e4, "param_ops_int" },
	{ 0x416e5db, "single_release" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0xbd19b5, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x652032cb, "mac_pton" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdc0815f1, "dev_get_by_name" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0xe914e41e, "strcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xa6257a2f, "complete" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x72c4b0c, "skb_checksum" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x670f8cae, "netif_receive_skb" },
	{ 0x8c3602ea, "udp4_hwcsum" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0x102b2005, "pktgen_xfrm_outer_mode_output" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x2124474, "ip_send_check" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb7377510, "skb_push" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x1000e51, "schedule" },
	{ 0x553efec4, "hrtimer_sleeper_start_expires" },
	{ 0x21b68d09, "hrtimer_init_sleeper" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xc56d0063, "softnet_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6197c046, "__put_page" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xe3265a74, "kthread_bind" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3da12c8c, "proc_create" },
	{ 0x8b2b24a2, "proc_mkdir" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0xe22d1723, "skb_put" },
	{ 0x85f04548, "__xfrm_state_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x779fe99f, "__put_task_struct" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2f2a1413, "proc_create_data" },
	{ 0x2c2a46a, "proc_remove" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x6587c97e, "module_put" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x1dbfbdad, "xfrm_stateonly_find" },
	{ 0xbe4895da, "xfrm_state_lookup_byspi" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x5dc00640, "single_open" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C6AAAFE89CD97B3FC41936");
