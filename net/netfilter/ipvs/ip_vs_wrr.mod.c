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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xccb1639f, "unregister_ip_vs_scheduler" },
	{ 0xb2a35946, "register_ip_vs_scheduler" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xea124bd1, "gcd" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5591d619, "ip_vs_scheduler_err" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "06C4B781BEAFA02BD183976");
