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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xc5933243, "input_free_device" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EFF51F99C919749C7CF263F");
