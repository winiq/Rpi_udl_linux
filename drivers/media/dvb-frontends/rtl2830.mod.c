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
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x108c8b14, "__i2c_transfer" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8733236, "intlog10" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaffb9cd2, "i2c_mux_add_adapter" },
	{ 0x7f57c791, "i2c_mux_alloc" },
	{ 0xbb629917, "__regmap_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xf306da06, "regmap_exit" },
	{ 0xc0736ccc, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "dvb-core,i2c-mux");

MODULE_ALIAS("i2c:rtl2830");

MODULE_INFO(srcversion, "A815B8365BAF9E8559A3677");
