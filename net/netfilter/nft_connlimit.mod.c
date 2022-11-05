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
	{ 0x4f7f5e63, "nft_unregister_obj" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0x6c519fff, "nft_register_obj" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x8f6f1461, "nf_ct_get_tuplepr" },
	{ 0xe1bbaa87, "nf_conncount_add" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
	{ 0x8c4cb9c3, "nf_conncount_list_init" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0x3ff55ad3, "nf_conncount_cache_free" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8c2e671d, "nf_conncount_gc_list" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_conncount");


MODULE_INFO(srcversion, "B8DC463C25B81894E7A2271");
