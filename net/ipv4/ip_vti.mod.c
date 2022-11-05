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
	{ 0x40b6a6f8, "ip_tunnel_get_link_net" },
	{ 0xae2e299f, "ip_tunnel_dellink" },
	{ 0xaa7e7e52, "ip_tunnel_get_iflink" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0xd1f78eed, "ip_tunnel_change_mtu" },
	{ 0x2dd6e1af, "ip_tunnel_siocdevprivate" },
	{ 0x59f3ef6b, "ip_tunnel_uninit" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0x1548b078, "xfrm4_protocol_deregister" },
	{ 0xf9de29e1, "xfrm4_tunnel_deregister" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0xa35655c2, "xfrm4_tunnel_register" },
	{ 0xf82d937c, "xfrm4_protocol_register" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x188e7bb8, "icmpv6_ndo_send" },
	{ 0x8a1740ea, "icmp_ndo_send" },
	{ 0x20ff3a07, "ip_route_output_key_hash" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x54113cf4, "dst_release" },
	{ 0x9f611c1f, "xfrm_lookup_route" },
	{ 0xd9762a53, "ip6_route_output_flags" },
	{ 0xd463189a, "__xfrm_decode_session" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x96062614, "xfrm_input" },
	{ 0x85f04548, "__xfrm_state_destroy" },
	{ 0xfa8871f3, "ipv4_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8624c04, "ipv4_redirect" },
	{ 0x672e6ca3, "xfrm_state_lookup" },
	{ 0x43a033e1, "ip_tunnel_lookup" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x2549883d, "skb_scrub_packet" },
	{ 0x3799930f, "__xfrm_policy_check" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf5ed7a0, "ip_tunnel_init_net" },
	{ 0xe72b9c49, "ip_tunnel_ctl" },
	{ 0x8b7f680, "ip_tunnel_delete_nets" },
	{ 0x975c560c, "ip_tunnel_init" },
	{ 0xe3d6a4d0, "ip_tunnel_setup" },
	{ 0xcd57429c, "ip_tunnel_header_ops" },
	{ 0xf95e0484, "ip_tunnel_newlink" },
	{ 0x20cb40cb, "ip_tunnel_changelink" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4,ipv6");


MODULE_INFO(srcversion, "DEB08C43D16739A37C8EEE4");
