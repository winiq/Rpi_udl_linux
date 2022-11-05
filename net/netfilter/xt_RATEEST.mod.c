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
	{ 0x18e60984, "__do_once_start" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xeb2391c9, "gen_new_estimator" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2e6b36a6, "xt_register_target" },
	{ 0xa916b694, "strnlen" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9158ff3f, "__do_once_done" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "51E053C26890607105D2FE0");
