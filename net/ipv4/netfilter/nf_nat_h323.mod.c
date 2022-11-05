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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x370637b5, "nf_ct_helper_expectfn_unregister" },
	{ 0x1e008725, "nf_ct_helper_expectfn_register" },
	{ 0x97b85d3f, "nat_q931_hook" },
	{ 0xc911b2ee, "nat_callforwarding_hook" },
	{ 0x9f10a5fa, "nat_h245_hook" },
	{ 0x56c6fac6, "nat_t120_hook" },
	{ 0xead22353, "nat_rtp_rtcp_hook" },
	{ 0xf95ed0ae, "set_ras_addr_hook" },
	{ 0x945f4b26, "set_sig_addr_hook" },
	{ 0x4d11d832, "set_h225_addr_hook" },
	{ 0x183c092b, "set_h245_addr_hook" },
	{ 0x1479cc1c, "nf_ct_unexpect_related" },
	{ 0xe26b0586, "get_h225_addr" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xfe277d69, "__nf_nat_mangle_tcp_packet" },
	{ 0x35a97f1b, "nf_nat_mangle_udp_packet" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x75005c57, "nf_nat_follow_master" },
	{ 0x376890f9, "nf_nat_setup_info" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");


MODULE_INFO(srcversion, "6444D29D128E41F19DC10B8");
