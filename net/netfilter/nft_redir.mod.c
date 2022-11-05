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
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
	{ 0x8b5ae838, "nft_chain_validate_dependency" },
	{ 0xd07bea36, "nf_nat_redirect_ipv4" },
	{ 0x682cb948, "nf_nat_redirect_ipv6" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb9154e68, "nft_dump_register" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "nf_tables,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "E9AE8A8ACC70914A3AB8EF2");
