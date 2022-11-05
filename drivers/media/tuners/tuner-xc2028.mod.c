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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6993f778, "param_ops_string" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb98c5300, "request_firmware_nowait" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "72871C4A9BC1BF362BBDE4E");
