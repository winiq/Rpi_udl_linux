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
	{ 0x63d7d6d6, "xt_unregister_target" },
	{ 0x2e6b36a6, "xt_register_target" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x6d99995e, "skb_store_bits" },
	{ 0xd0411bd2, "skb_ensure_writable" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "1D6FA0505D5EDA3075CDC5E");