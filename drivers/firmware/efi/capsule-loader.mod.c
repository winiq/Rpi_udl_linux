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
	{ 0xcc26711b, "no_llseek" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0xba7b3b54, "misc_register" },
	{ 0x190a48a9, "efi" },
	{ 0x94961283, "vunmap" },
	{ 0x9e316209, "vmap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xdcb764ad, "memset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0x2aadad1a, "efi_capsule_update" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xa5bda8a1, "efi_capsule_supported" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9AD8E5756E33242C9EB1F3D");
