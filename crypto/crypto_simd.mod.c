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
	{ 0x9206c332, "crypto_alloc_skcipher" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x80e39d99, "cryptd_free_skcipher" },
	{ 0x2e9f361c, "crypto_unregister_skciphers" },
	{ 0x38ca69ea, "cryptd_free_aead" },
	{ 0x8dbb45e5, "cryptd_skcipher_queued" },
	{ 0x383c44a3, "crypto_register_skciphers" },
	{ 0x80e5a6bf, "crypto_unregister_skcipher" },
	{ 0xd824e7c0, "cryptd_aead_queued" },
	{ 0x88b02222, "crypto_aead_encrypt" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1c1f4268, "crypto_register_skcipher" },
	{ 0xad1d9417, "crypto_aead_setkey" },
	{ 0xd8a99c0f, "cryptd_alloc_skcipher" },
	{ 0xd81fb8f6, "crypto_skcipher_decrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb53dfef, "cpu_hwcaps" },
	{ 0xac04ce4f, "cryptd_skcipher_child" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0x1efd80d1, "crypto_unregister_aeads" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x1aeb45b5, "crypto_skcipher_setkey" },
	{ 0x893dd312, "crypto_aead_decrypt" },
	{ 0x8751e98a, "crypto_aead_setauthsize" },
	{ 0x3d153805, "crypto_alloc_aead" },
	{ 0xd66c4701, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x146cea0f, "crypto_unregister_aead" },
	{ 0xb0afc43c, "crypto_register_aead" },
	{ 0x4ac2ca28, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd49f56ae, "cryptd_alloc_aead" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "97509D0C432E67D3007BE03");
