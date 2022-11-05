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
	{ 0x9e70eed6, "nft_parse_register_store" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
	{ 0x9166fada, "strncpy" },
	{ 0xd367601c, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb9154e68, "nft_dump_register" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "CFAA67ADB463218095A4903");
