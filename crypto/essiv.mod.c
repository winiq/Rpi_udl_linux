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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x88b02222, "crypto_aead_encrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x893dd312, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xd81fb8f6, "crypto_skcipher_decrypt" },
	{ 0x6eb54550, "skcipher_register_instance" },
	{ 0x314cd2d8, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xda7d76cd, "crypto_shash_alg_has_setkey" },
	{ 0x2d3fa0c8, "crypto_mod_put" },
	{ 0x73ead729, "crypto_alg_mod_lookup" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6bcc513e, "crypto_grab_aead" },
	{ 0x92997ed8, "_printk" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x3bc79383, "crypto_grab_skcipher" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xf96304d0, "crypto_shash_tfm_digest" },
	{ 0x1aeb45b5, "crypto_skcipher_setkey" },
	{ 0xad1d9417, "crypto_aead_setkey" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5587f24f, "crypto_cipher_setkey" },
	{ 0x4ce25399, "crypto_shash_finup" },
	{ 0xf6471863, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xa18e6296, "crypto_spawn_tfm2" },
	{ 0x86592ac3, "crypto_alloc_shash" },
	{ 0xa8dc6b7f, "crypto_alloc_base" },
	{ 0x72978037, "crypto_drop_spawn" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
	{ 0xa464b71b, "crypto_cipher_encrypt_one" },
	{ 0x8751e98a, "crypto_aead_setauthsize" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "6C391FBA9370E4FB4E9E09E");
