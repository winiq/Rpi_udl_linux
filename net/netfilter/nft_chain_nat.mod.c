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
	{ 0xb3c9e82a, "nf_nat_ipv4_unregister_fn" },
	{ 0x31566c00, "nf_nat_ipv4_register_fn" },
	{ 0xf108faae, "nf_nat_ipv6_unregister_fn" },
	{ 0x67a8c687, "nf_nat_ipv6_register_fn" },
	{ 0x3e5e9420, "nft_unregister_chain_type" },
	{ 0x82ab5f2a, "nft_register_chain_type" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36099e24, "nft_do_chain" },
	{ 0xa7a116d3, "ipv6_find_hdr" },
	{ 0xfc2ac87, "nf_nat_inet_register_fn" },
	{ 0x5c6f1a82, "nf_nat_inet_unregister_fn" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "355DF73E2976056E9EE21A7");
