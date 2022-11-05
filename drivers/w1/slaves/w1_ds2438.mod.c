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
	{ 0x9bbbdfa1, "w1_unregister_family" },
	{ 0x58afe81b, "w1_register_family" },
	{ 0x4829a47e, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xa3718e02, "w1_write_8" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0x14908ae1, "w1_read_block" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9484540f, "w1_read_8" },
	{ 0x5687a2ab, "w1_write_block" },
	{ 0xc72a424e, "w1_reset_select_slave" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "0F4DE2AC630358ECB70F20E");
