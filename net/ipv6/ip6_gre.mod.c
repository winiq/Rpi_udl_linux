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
	{ 0x8bde4387, "ip6_tnl_get_link_net" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0xb78c5545, "ip6_tnl_get_iflink" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0x4044b6ed, "inet6_del_protocol" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0xa045041a, "inet6_add_protocol" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x555e0f27, "___pskb_trim" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9e34c017, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x638c7455, "ns_capable" },
	{ 0x8a1740ea, "icmp_ndo_send" },
	{ 0x8eab5063, "iptunnel_handle_offloads" },
	{ 0xe88b78ee, "ip6_tnl_xmit_ctl" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x921ca4bb, "ip6_tnl_xmit" },
	{ 0xd367601c, "nla_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xabba3d11, "__icmpv6_send" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x15f3503c, "ip6_tnl_rcv" },
	{ 0xb9f769d3, "metadata_dst_alloc" },
	{ 0x64d3046a, "__iptunnel_pull_header" },
	{ 0xf605d345, "gro_cells_init" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9b8ea88, "ip6_update_pmtu" },
	{ 0xdadcb78f, "ip6_redirect" },
	{ 0x119aa811, "gre_parse_header" },
	{ 0x188e7bb8, "icmpv6_ndo_send" },
	{ 0x9b422382, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0xca55c602, "make_kuid" },
	{ 0xc12d9cd4, "ip6_tnl_encap_setup" },
	{ 0xfdebb4db, "ip6_tnl_change_mtu" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x82baa22e, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc81758e5, "ether_setup" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc7e5c20b, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xcf17c87d, "ip6_tnl_get_cap" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x47f8d635, "__get_hash_from_flowi6" },
	{ 0xb7377510, "skb_push" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x15ba50a6, "jiffies" },
};

MODULE_INFO(depends, "ip6_tunnel,ipv6,gre");


MODULE_INFO(srcversion, "43671CF855C42EA420BBF95");
