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
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd4c7b228, "nf_osf_find" },
	{ 0x35eff5e0, "nf_osf_fingers" },
	{ 0x9e70eed6, "nft_parse_register_store" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb9154e68, "nft_dump_register" },
	{ 0xd367601c, "nla_put" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink_osf");


MODULE_INFO(srcversion, "B857357E964D311643DBA80");
