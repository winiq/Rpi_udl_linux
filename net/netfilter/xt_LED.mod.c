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
	{ 0xf19240b4, "led_trigger_blink_oneshot" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8c852f46, "led_trigger_register" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc826e9aa, "led_trigger_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xebcad1ec, "led_trigger_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "6053A24C4AE0734123C1C0B");
