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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x40b6a6f8, "ip_tunnel_get_link_net" },
	{ 0xaa7e7e52, "ip_tunnel_get_iflink" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0xa35655c2, "xfrm4_tunnel_register" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0xf9de29e1, "xfrm4_tunnel_deregister" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2dd6e1af, "ip_tunnel_siocdevprivate" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x188e7bb8, "icmpv6_ndo_send" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe9bffc43, "dst_cache_set_ip4" },
	{ 0xcd35276f, "iptunnel_xmit" },
	{ 0x28c35568, "iptun_encaps" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xb9a02d17, "skb_set_owner_w" },
	{ 0xb7e25bd9, "skb_realloc_headroom" },
	{ 0x587bc7c1, "dst_cache_get_ip4" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xecb6b690, "ipv6_chk_prefix" },
	{ 0x92997ed8, "_printk" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x94e9d38e, "ipv6_chk_custom_prefix" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0x54113cf4, "dst_release" },
	{ 0x87404e2a, "ip_route_output_flow" },
	{ 0xca55c602, "make_kuid" },
	{ 0x3799930f, "__xfrm_policy_check" },
	{ 0xaaa5891b, "ip_tunnel_rcv" },
	{ 0x64d3046a, "__iptunnel_pull_header" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2e7001fa, "ip_tunnel_xmit" },
	{ 0x8eab5063, "iptunnel_handle_offloads" },
	{ 0x638c7455, "ns_capable" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x82baa22e, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x2527742f, "ip_tunnel_encap_setup" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8624c04, "ipv4_redirect" },
	{ 0xfa8871f3, "ipv4_update_pmtu" },
	{ 0xe7e52dc0, "ip6_err_gen_icmpv6_unreach" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9e34c017, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
	{ 0xcd57429c, "ip_tunnel_header_ops" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4,ipv6");


MODULE_INFO(srcversion, "08B15F91C8E3DAF380D61D7");
