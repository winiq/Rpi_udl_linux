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
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x914d5bbe, "xt_unregister_template" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0xc409b3e3, "xt_register_template" },
	{ 0x81e4f795, "ip6t_do_table" },
	{ 0x67a8c687, "nf_nat_ipv6_register_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xaa3a1682, "xt_find_table" },
	{ 0x2cc465b2, "ip6t_register_table" },
	{ 0xbb88b617, "ip6t_alloc_initial_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xf108faae, "nf_nat_ipv6_unregister_fn" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x36a41891, "ip6t_unregister_table_exit" },
};

MODULE_INFO(depends, "x_tables,ip6_tables,nf_nat");


MODULE_INFO(srcversion, "B59196B629D5FAF20A5D0FC");