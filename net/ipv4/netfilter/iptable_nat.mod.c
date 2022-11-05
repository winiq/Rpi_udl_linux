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
	{ 0xcd9aaea6, "ipt_do_table" },
	{ 0x31566c00, "nf_nat_ipv4_register_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xaa3a1682, "xt_find_table" },
	{ 0x285972ed, "ipt_register_table" },
	{ 0xb2062684, "ipt_alloc_initial_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3c9e82a, "nf_nat_ipv4_unregister_fn" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb824e625, "ipt_unregister_table_exit" },
};

MODULE_INFO(depends, "x_tables,ip_tables,nf_nat");


MODULE_INFO(srcversion, "16D3EBB4106596D1C30D118");
