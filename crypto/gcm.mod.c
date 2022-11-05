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
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x87b8798d, "sg_next" },
	{ 0x42de93c6, "crypto_ahash_finup" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x4432bce0, "crypto_ahash_setkey" },
	{ 0x288ed929, "crypto_req_done" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1aeb45b5, "crypto_skcipher_setkey" },
	{ 0xd81fb8f6, "crypto_skcipher_decrypt" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x3bc79383, "crypto_grab_skcipher" },
	{ 0xb5fe6782, "crypto_grab_ahash" },
	{ 0x314cd2d8, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6bcc513e, "crypto_grab_aead" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x72978037, "crypto_drop_spawn" },
	{ 0xc76fa9ce, "crypto_get_default_null_skcipher" },
	{ 0xa18e6296, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xad1d9417, "crypto_aead_setkey" },
	{ 0x8751e98a, "crypto_aead_setauthsize" },
	{ 0x893dd312, "crypto_aead_decrypt" },
	{ 0x88b02222, "crypto_aead_encrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0F853D735E9297CFE93B406");