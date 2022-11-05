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
	{ 0x8cb305ff, "pskb_trim_rcsum_slow" },
	{ 0x54113cf4, "dst_release" },
	{ 0xf729cf65, "nf_ct_attach" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xabba3d11, "__icmpv6_send" },
	{ 0xa5bf2810, "l3mdev_master_ifindex_rcu" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe8143a25, "nf_ipv6_ops" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xd9762a53, "ip6_route_output_flags" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x72298d2f, "ip6_local_out" },
	{ 0xff6e75e2, "ip6_dst_hoplimit" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0xfb8c7be8, "xfrm_lookup" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x692e4229, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "40FBEC92BD9EFBD535AB6CB");
