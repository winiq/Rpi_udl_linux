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
	{ 0x1e008725, "nf_ct_helper_expectfn_register" },
	{ 0x6f106a69, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x370637b5, "nf_ct_helper_expectfn_unregister" },
	{ 0x7256d471, "nf_nat_sip_hooks" },
	{ 0xb57a6142, "nf_nat_helper_unregister" },
	{ 0xd0411bd2, "skb_ensure_writable" },
	{ 0x36ab0b06, "ct_sip_parse_numerical_param" },
	{ 0xfa5d434d, "ct_sip_parse_request" },
	{ 0x2178bc5a, "ct_sip_parse_address_param" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xe09e6935, "ct_sip_parse_header_uri" },
	{ 0x71a9e0dd, "nf_ct_seqadj_set" },
	{ 0xc5263429, "nf_ct_helper_log" },
	{ 0x1479cc1c, "nf_ct_unexpect_related" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9827a98e, "ct_sip_get_header" },
	{ 0x74e26765, "ct_sip_get_sdp_header" },
	{ 0xfe277d69, "__nf_nat_mangle_tcp_packet" },
	{ 0x35a97f1b, "nf_nat_mangle_udp_packet" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x376890f9, "nf_nat_setup_info" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "611C746A25BF5C9EAEC77E5");
