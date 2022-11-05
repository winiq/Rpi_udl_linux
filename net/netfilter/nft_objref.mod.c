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
	{ 0xb9154e68, "nft_dump_register" },
	{ 0xd368d323, "nft_set_catchall_lookup" },
	{ 0x614a556e, "nf_tables_bind_set" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x3317ba2, "nft_set_lookup_global" },
	{ 0x10b7ff2c, "nf_tables_deactivate_set" },
	{ 0x22908917, "nf_tables_destroy_set" },
	{ 0x9205ca7, "nft_obj_lookup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
	{ 0x98cf60b3, "strlen" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "73A522DABE88DFDFED054AE");
