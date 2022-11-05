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
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7d315a7a, "lirc_scancode_event" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7cf52901, "ir_raw_gen_manchester" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "59F25D4696BFCAAA43646C1");
