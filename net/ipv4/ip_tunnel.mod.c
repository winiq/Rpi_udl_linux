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
	{ 0x98cf60b3, "strlen" },
	{ 0x28c35568, "iptun_encaps" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x54113cf4, "dst_release" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x587bc7c1, "dst_cache_get_ip4" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0x2549883d, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x8a1740ea, "icmp_ndo_send" },
	{ 0x5792f848, "strlcpy" },
	{ 0xcd35276f, "iptunnel_xmit" },
	{ 0x10e40768, "gro_cells_receive" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x82baa22e, "init_net" },
	{ 0x9ac478ac, "__skb_get_hash" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x188e7bb8, "icmpv6_ndo_send" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x9e34c017, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x87404e2a, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf605d345, "gro_cells_init" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe9bffc43, "dst_cache_set_ip4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa163fd6d, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FDE30AEA13543329CBC8B28");
