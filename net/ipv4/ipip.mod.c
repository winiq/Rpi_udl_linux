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
	{ 0xae2e299f, "ip_tunnel_dellink" },
	{ 0xaa7e7e52, "ip_tunnel_get_iflink" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0xd1f78eed, "ip_tunnel_change_mtu" },
	{ 0x2dd6e1af, "ip_tunnel_siocdevprivate" },
	{ 0x59f3ef6b, "ip_tunnel_uninit" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0xf9de29e1, "xfrm4_tunnel_deregister" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0xa35655c2, "xfrm4_tunnel_register" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x3799930f, "__xfrm_policy_check" },
	{ 0xaaa5891b, "ip_tunnel_rcv" },
	{ 0xb9f769d3, "metadata_dst_alloc" },
	{ 0x64d3046a, "__iptunnel_pull_header" },
	{ 0xe72b9c49, "ip_tunnel_ctl" },
	{ 0xf5ed7a0, "ip_tunnel_init_net" },
	{ 0x8b7f680, "ip_tunnel_delete_nets" },
	{ 0x8624c04, "ipv4_redirect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa8871f3, "ipv4_update_pmtu" },
	{ 0x43a033e1, "ip_tunnel_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x975c560c, "ip_tunnel_init" },
	{ 0x2e7001fa, "ip_tunnel_xmit" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8174c5ed, "ip_md_tunnel_xmit" },
	{ 0x8eab5063, "iptunnel_handle_offloads" },
	{ 0xe3d6a4d0, "ip_tunnel_setup" },
	{ 0xcd57429c, "ip_tunnel_header_ops" },
	{ 0xf95e0484, "ip_tunnel_newlink" },
	{ 0x20cb40cb, "ip_tunnel_changelink" },
	{ 0x2527742f, "ip_tunnel_encap_setup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "AA6787DB088B0A4753B3C4D");
