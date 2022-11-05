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
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xe254994, "v4l2_ctrl_auto_cluster" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xdd64e639, "strscpy" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:fc2580");

MODULE_INFO(srcversion, "DA5889915B2991A5D0F4FF7");
