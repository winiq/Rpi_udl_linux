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
	{ 0xc72a424e, "w1_reset_select_slave" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb46411ce, "platform_device_alloc" },
	{ 0xcb809a58, "platform_device_add" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x5687a2ab, "w1_write_block" },
	{ 0xa3718e02, "w1_write_8" },
	{ 0x14908ae1, "w1_read_block" },
	{ 0x58afe81b, "w1_register_family" },
	{ 0xe61ce347, "platform_device_put" },
	{ 0x9bbbdfa1, "w1_unregister_family" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "4482E47234F3E02592410F2");