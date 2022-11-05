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
	{ 0x16bfcba2, "kset_create_and_add" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6a449c4f, "register_sysctl_table" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0x319d493d, "proc_dostring" },
	{ 0x6587c97e, "module_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x90092c1d, "fs_kobj" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x98e6e6f2, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AB4FAEE17D475D45582560C");
