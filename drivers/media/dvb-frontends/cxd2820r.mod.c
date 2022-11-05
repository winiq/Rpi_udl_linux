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
	{ 0xf9a482f9, "msleep" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0xf306da06, "regmap_exit" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x340c265, "gpiochip_remove" },
	{ 0xc2937d7c, "gpiochip_add_data_with_key" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x18e2e423, "i2c_new_client_device" },
	{ 0xbed7bbde, "__regmap_init_i2c" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xffde228, "gpiochip_get_data" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x696f8a06, "i2c_new_dummy_device" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x45a55acd, "regmap_write" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:cxd2820r");

MODULE_INFO(srcversion, "639E9340772277EAC59BEB2");
