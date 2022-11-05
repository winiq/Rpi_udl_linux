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
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaffb9cd2, "i2c_mux_add_adapter" },
	{ 0x7f57c791, "i2c_mux_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbed7bbde, "__regmap_init_i2c" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xf306da06, "regmap_exit" },
	{ 0xc0736ccc, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:gx1503");

MODULE_INFO(srcversion, "B3F7461CB6EA7007F7652A5");