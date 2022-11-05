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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcdeede81, "release_sock" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0x53b954a2, "up_read" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5b5d2ae4, "nf_queue_nf_hook_drop" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0xa470d75d, "nf_nat_hook" },
	{ 0x9b09bacf, "ip_ct_attach" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb12a0e60, "nf_defrag_ipv6_enable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x4d54ba2e, "inet_proto_csum_replace4" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7010b9ba, "proc_set_user" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9ebdbd2e, "__skb_checksum" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xb15b4109, "crc32c" },
	{ 0xba53adab, "nla_policy_len" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x8d39172e, "nf_ip_checksum" },
	{ 0x95775e45, "make_kgid" },
	{ 0x73b44b9e, "nf_log_packet" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xd93c033c, "nf_unregister_net_hooks" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd0411bd2, "skb_ensure_writable" },
	{ 0x241851dc, "nf_checksum_partial" },
	{ 0xd367601c, "nla_put" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0x51d13875, "nf_hooks_lwtunnel_sysctl_handler" },
	{ 0xcdcef655, "nf_checksum" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6587c97e, "module_put" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x73309694, "nf_register_net_hooks" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0xa77b30c8, "nf_defrag_ipv6_disable" },
	{ 0xca55c602, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x955004ba, "param_get_uint" },
	{ 0xab30d1c8, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xad463baa, "nf_ct_hook" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb195b199, "nf_defrag_ipv4_enable" },
	{ 0x95f0f9, "param_set_uint" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0xcf0a0f79, "nf_register_sockopt" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7510c7fe, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xfc03a4ca, "proc_dou8vec_minmax" },
	{ 0x692e4229, "nf_ip6_checksum" },
	{ 0xa21a11b6, "nf_defrag_ipv4_disable" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x9158ff3f, "__do_once_done" },
};

MODULE_INFO(depends, "nf_defrag_ipv6,nf_defrag_ipv4");


MODULE_INFO(srcversion, "609D5C02106A7286EE1D53D");