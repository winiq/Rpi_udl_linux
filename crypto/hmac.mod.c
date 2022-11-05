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
	{ 0x621a4a7c, "crypto_unregister_template" },
	{ 0x53a543d0, "crypto_register_template" },
	{ 0xd4d7fee4, "shash_register_instance" },
	{ 0xc95d567, "crypto_inst_setname" },
	{ 0x3e9b01bd, "shash_free_singlespawn_instance" },
	{ 0xda7d76cd, "crypto_shash_alg_has_setkey" },
	{ 0x51b31982, "crypto_grab_shash" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x1a456e89, "crypto_shash_final" },
	{ 0x4ce25399, "crypto_shash_finup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf6471863, "crypto_shash_update" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xe170b657, "crypto_shash_digest" },
	{ 0xa18e6296, "crypto_spawn_tfm2" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6D4B24BF5EA09B4FDC6548C");
