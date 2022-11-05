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
	{ 0xebcad1ec, "led_trigger_unregister" },
	{ 0x8c852f46, "led_trigger_register" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8280bf99, "led_get_default_pattern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0xb51d0e04, "led_set_brightness" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x96848186, "scnprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7582CFBF5591EAB9D62DD54");
