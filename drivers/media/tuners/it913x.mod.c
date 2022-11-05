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
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:it9133ax-tuner");
MODULE_ALIAS("platform:it9133bx-tuner");

MODULE_INFO(srcversion, "32060EA0E2CF2948E6874F7");
