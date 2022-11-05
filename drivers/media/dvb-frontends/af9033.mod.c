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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xbed7bbde, "__regmap_init_i2c" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8733236, "intlog10" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xf306da06, "regmap_exit" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:af9033");

MODULE_INFO(srcversion, "94E9D8AAAD88932C05BB3E0");