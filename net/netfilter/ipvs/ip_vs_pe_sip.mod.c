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
	{ 0x5569b98f, "unregister_ip_vs_pe" },
	{ 0x6daff389, "register_ip_vs_pe" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9827a98e, "ct_sip_get_header" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xa7a116d3, "ipv6_find_hdr" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2b32cbe6, "ip_vs_new_conn_out" },
};

MODULE_INFO(depends, "ip_vs,nf_conntrack_sip");


MODULE_INFO(srcversion, "C9C76B0127BA9FB1A4B93EC");
