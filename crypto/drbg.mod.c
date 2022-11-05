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
	{ 0x15926ea, "crypto_unregister_rngs" },
	{ 0x3dc33d52, "crypto_register_rngs" },
	{ 0x3092c783, "crypto_alloc_rng" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x92997ed8, "_printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x86592ac3, "crypto_alloc_shash" },
	{ 0x1a456e89, "crypto_shash_final" },
	{ 0xf6471863, "crypto_shash_update" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3a4f9d28, "rng_is_initialized" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x54674230, "crypto_shash_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x98cf60b3, "strlen" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "15BC4850FC6679DC8D9C38C");
