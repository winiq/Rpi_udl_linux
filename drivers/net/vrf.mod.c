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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x78f59f4b, "l3mdev_table_lookup_unregister" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0xdb0f2047, "l3mdev_table_lookup_register" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x80365c66, "nd_tbl" },
	{ 0x7850a963, "inet_select_addr" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x21207e1d, "ip6_dst_lookup_flow" },
	{ 0x87404e2a, "ip_route_output_flow" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x16cdfb97, "ip6_dst_alloc" },
	{ 0x9b450b9, "fib6_new_table" },
	{ 0xb400df15, "rt_dst_alloc" },
	{ 0xc13cf90, "fib_new_table" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x54113cf4, "dst_release" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x29c2dd65, "nf_hook_slow" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5da070b7, "ipv6_stub" },
	{ 0xa511d5e8, "__neigh_create" },
	{ 0x1f00d5a5, "skb_expand_head" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8c67236a, "arp_tbl" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8b18ecfc, "dev_queue_xmit_nit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xb7377510, "skb_push" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x6831cd7d, "netdev_lower_get_next" },
	{ 0x7510c7fe, "register_net_sysctl" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa346e867, "netdev_master_upper_dev_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x49016ee9, "netdev_master_upper_dev_get" },
	{ 0x7ea87368, "netdev_upper_dev_unlink" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x50e03afe, "dev_change_flags" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x37a0cba, "kfree" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc81758e5, "ether_setup" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x7bfc593d, "ip6_pol_route" },
	{ 0x5792f848, "strlcpy" },
	{ 0x59f2b79c, "fib_nl_delrule" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x1cb3296, "fib_nl_newrule" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "A424D7369D3AC260768B499");
