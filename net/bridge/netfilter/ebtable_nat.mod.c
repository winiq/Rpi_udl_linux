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
	{ 0xcaf694fb, "ebt_unregister_template" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x44d98725, "ebt_register_template" },
	{ 0xa2288068, "ebt_do_table" },
	{ 0x150bac9a, "ebt_register_table" },
	{ 0x86a453b4, "ebt_unregister_table_pre_exit" },
	{ 0x3f5ee26c, "ebt_unregister_table" },
};

MODULE_INFO(depends, "ebtables");


MODULE_INFO(srcversion, "683E66C3852FF90F02CA207");
