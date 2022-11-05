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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x8733236, "intlog10" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8806be4, "i2c_add_adapter" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xe37d4b98, "i2c_del_adapter" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:tc90522sat");
MODULE_ALIAS("i2c:tc90522ter");

MODULE_INFO(srcversion, "ED5347CFC9B039EAF048C5E");
