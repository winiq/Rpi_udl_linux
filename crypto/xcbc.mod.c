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
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd4d7fee4, "shash_register_instance" },
	{ 0xc95d567, "crypto_inst_setname" },
	{ 0x3e9b01bd, "shash_free_singlespawn_instance" },
	{ 0xfd7048fe, "crypto_grab_spawn" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xf057aac7, "crypto_spawn_tfm" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa464b71b, "crypto_cipher_encrypt_one" },
	{ 0x5587f24f, "crypto_cipher_setkey" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "47CAEC5189F831A8FD50774");
