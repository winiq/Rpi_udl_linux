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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x914d5bbe, "xt_unregister_template" },
	{ 0xd7672421, "xt_hook_ops_alloc" },
	{ 0xc409b3e3, "xt_register_template" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cc465b2, "ip6t_register_table" },
	{ 0xbb88b617, "ip6t_alloc_initial_table" },
	{ 0x81e4f795, "ip6t_do_table" },
	{ 0xfe518989, "ip6t_unregister_table_pre_exit" },
	{ 0x36a41891, "ip6t_unregister_table_exit" },
};

MODULE_INFO(depends, "x_tables,ip6_tables");


MODULE_INFO(srcversion, "FB63BFE4DD67DCBE811BE0F");
