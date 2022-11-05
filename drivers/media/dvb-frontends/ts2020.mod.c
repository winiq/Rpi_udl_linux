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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0xf306da06, "regmap_exit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x18e2e423, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbed7bbde, "__regmap_init_i2c" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x45a55acd, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ts2020");
MODULE_ALIAS("i2c:ts2022");

MODULE_INFO(srcversion, "9B7085A9B8C2A30BC7B2C2D");
