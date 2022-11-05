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
	{ 0x8bde4387, "ip6_tnl_get_link_net" },
	{ 0xb78c5545, "ip6_tnl_get_iflink" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0x707712df, "xfrm6_protocol_deregister" },
	{ 0xe3fbe9c1, "xfrm6_tunnel_deregister" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0x7225d6d3, "xfrm6_tunnel_register" },
	{ 0x86e8378a, "xfrm6_protocol_register" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x638c7455, "ns_capable" },
	{ 0x188e7bb8, "icmpv6_ndo_send" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x20ff3a07, "ip_route_output_key_hash" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x8a1740ea, "icmp_ndo_send" },
	{ 0xe88b78ee, "ip6_tnl_xmit_ctl" },
	{ 0x9f611c1f, "xfrm_lookup_route" },
	{ 0xd9762a53, "ip6_route_output_flags" },
	{ 0xd463189a, "__xfrm_decode_session" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x9cab4e2e, "xfrm6_tunnel_spi_lookup" },
	{ 0x96062614, "xfrm_input" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xd5bb9579, "ip6_tnl_rcv_ctl" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x85f04548, "__xfrm_state_destroy" },
	{ 0xdadcb78f, "ip6_redirect" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9b8ea88, "ip6_update_pmtu" },
	{ 0xca55c602, "make_kuid" },
	{ 0x672e6ca3, "xfrm_state_lookup" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x2549883d, "skb_scrub_packet" },
	{ 0x3799930f, "__xfrm_policy_check" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x82baa22e, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcd57429c, "ip_tunnel_header_ops" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9e34c017, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc7e5c20b, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0xcf17c87d, "ip6_tnl_get_cap" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "ip6_tunnel,ipv6,tunnel6,xfrm6_tunnel");


MODULE_INFO(srcversion, "D096D70D04B6AC2A5443EE8");
