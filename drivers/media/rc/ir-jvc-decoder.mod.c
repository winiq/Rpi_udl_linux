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
	{ 0xdac94754, "ir_raw_handler_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x89443f3d, "ir_raw_handler_register" },
	{ 0xb57e7350, "rc_keydown" },
	{ 0xe9a8f99, "rc_repeat" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9e12e343, "ir_raw_gen_pd" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CDB1D5F59A15242FEFFE522");
