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
	{ 0xe72b9c49, "ip_tunnel_ctl" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0xaa7e7e52, "ip_tunnel_get_iflink" },
	{ 0x54113cf4, "dst_release" },
	{ 0xb9f769d3, "metadata_dst_alloc" },
	{ 0xfa8871f3, "ipv4_update_pmtu" },
	{ 0x43a033e1, "ip_tunnel_lookup" },
	{ 0x720501af, "__ip_tunnel_change_mtu" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x38762eec, "__icmp_send" },
	{ 0x2e7001fa, "ip_tunnel_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x64d3046a, "__iptunnel_pull_header" },
	{ 0xe3d6a4d0, "ip_tunnel_setup" },
	{ 0xae2e299f, "ip_tunnel_dellink" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x8b7f680, "ip_tunnel_delete_nets" },
	{ 0x7f34bd82, "gre_add_protocol" },
	{ 0xf95e0484, "ip_tunnel_newlink" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0x59f3ef6b, "ip_tunnel_uninit" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xd367601c, "nla_put" },
	{ 0x2dbcfa6f, "gre_del_protocol" },
	{ 0xb7377510, "skb_push" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x975c560c, "ip_tunnel_init" },
	{ 0x40b6a6f8, "ip_tunnel_get_link_net" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x9ac478ac, "__skb_get_hash" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0x8174c5ed, "ip_md_tunnel_xmit" },
	{ 0x20cb40cb, "ip_tunnel_changelink" },
	{ 0xfc94fa93, "rtnl_configure_link" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8624c04, "ipv4_redirect" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xf5ed7a0, "ip_tunnel_init_net" },
	{ 0x8eab5063, "iptunnel_handle_offloads" },
	{ 0x87404e2a, "ip_route_output_flow" },
	{ 0xba398427, "rtnl_create_link" },
	{ 0x2dd6e1af, "ip_tunnel_siocdevprivate" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xe7e52dc0, "ip6_err_gen_icmpv6_unreach" },
	{ 0x4829a47e, "memcpy" },
	{ 0x555e0f27, "___pskb_trim" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0x2527742f, "ip_tunnel_encap_setup" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd1f78eed, "ip_tunnel_change_mtu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x119aa811, "gre_parse_header" },
	{ 0xaaa5891b, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre,ipv6");


MODULE_INFO(srcversion, "D721EF6E756D166358ECC37");
