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
	{ 0xb31dca45, "xt_unregister_match" },
	{ 0xe9bd984d, "xt_register_match" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x8f6f1461, "nf_ct_get_tuplepr" },
	{ 0x23208527, "nf_conncount_count" },
	{ 0x75914acb, "nf_conncount_init" },
	{ 0xcc2a0322, "nf_conncount_destroy" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack,nf_conncount");


MODULE_INFO(srcversion, "6E6CAD986BFB098D5034A9C");
