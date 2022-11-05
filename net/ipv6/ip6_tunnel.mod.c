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
	{ 0xe3fbe9c1, "xfrm6_tunnel_deregister" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x54113cf4, "dst_release" },
	{ 0xb9f769d3, "metadata_dst_alloc" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xc308e57e, "dst_cache_set_ip6" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xb9a02d17, "skb_set_owner_w" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0x38762eec, "__icmp_send" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb7e25bd9, "skb_realloc_headroom" },
	{ 0x2549883d, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xdadcb78f, "ip6_redirect" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xabba3d11, "__icmpv6_send" },
	{ 0x64d3046a, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xd367601c, "nla_put" },
	{ 0x8a1740ea, "icmp_ndo_send" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe9d4969, "dst_cache_get" },
	{ 0xb7377510, "skb_push" },
	{ 0x10e40768, "gro_cells_receive" },
	{ 0xc4284bd3, "dev_get_by_index_rcu" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xac1ba713, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x188e7bb8, "icmpv6_ndo_send" },
	{ 0xe3bed6e4, "ip_route_input_noref" },
	{ 0xf2e91dea, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xd9762a53, "ip6_route_output_flags" },
	{ 0xca55c602, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x47f8d635, "__get_hash_from_flowi6" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9b8ea88, "ip6_update_pmtu" },
	{ 0x9e34c017, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x8eab5063, "iptunnel_handle_offloads" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x87404e2a, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf605d345, "gro_cells_init" },
	{ 0x3799930f, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xc7e5c20b, "rt6_lookup" },
	{ 0xcd57429c, "ip_tunnel_header_ops" },
	{ 0x6c8a668c, "ip6tun_encaps" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x72298d2f, "ip6_local_out" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xff6e75e2, "ip6_dst_hoplimit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x7225d6d3, "xfrm6_tunnel_register" },
	{ 0xfb8c7be8, "xfrm_lookup" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x910cb930, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "0A803245683DE1E583F428A");
