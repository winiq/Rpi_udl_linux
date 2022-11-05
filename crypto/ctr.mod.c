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
	{ 0x63609097, "crypto_unregister_templates" },
	{ 0x1e647844, "crypto_register_templates" },
	{ 0xa464b71b, "crypto_cipher_encrypt_one" },
	{ 0x6852d6f1, "skcipher_walk_done" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xd160095a, "skcipher_walk_virt" },
	{ 0x8d6a4c7, "skcipher_alloc_instance_simple" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6eb54550, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3bc79383, "crypto_grab_skcipher" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x72978037, "crypto_drop_spawn" },
	{ 0x1aeb45b5, "crypto_skcipher_setkey" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
	{ 0xa18e6296, "crypto_spawn_tfm2" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "24B98D4E96BE16D932FA8FA");
