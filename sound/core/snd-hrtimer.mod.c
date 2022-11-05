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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x51150b42, "snd_timer_global_new" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x657f69d0, "snd_timer_interrupt" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x5f021922, "snd_timer_global_register" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0x1aa8d1f8, "snd_timer_global_free" },
};

MODULE_INFO(depends, "snd-timer");


MODULE_INFO(srcversion, "77DB12C3D68E4B25DF6A6EB");
