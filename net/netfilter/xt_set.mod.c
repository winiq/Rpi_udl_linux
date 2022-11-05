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
	{ 0x43bcd2f6, "xt_unregister_targets" },
	{ 0xd6e7200f, "xt_unregister_matches" },
	{ 0x68921f19, "xt_register_targets" },
	{ 0x4c705db5, "xt_register_matches" },
	{ 0xe80d8d68, "ip_set_test" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfd36e8c3, "ip_set_del" },
	{ 0x72195d1d, "ip_set_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9b882f4c, "ip_set_nfnl_get_byindex" },
	{ 0x102506bc, "ip_set_nfnl_put" },
};

MODULE_INFO(depends, "x_tables,ip_set");


MODULE_INFO(srcversion, "2664E89D13CED67CA5A2AEC");
