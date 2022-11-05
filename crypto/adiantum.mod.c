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
	{ 0x25974000, "wait_for_completion" },
	{ 0x54674230, "crypto_shash_setkey" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x5587f24f, "crypto_cipher_setkey" },
	{ 0x288ed929, "crypto_req_done" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1aeb45b5, "crypto_skcipher_setkey" },
	{ 0x6eb54550, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0x51b31982, "crypto_grab_shash" },
	{ 0xfd7048fe, "crypto_grab_spawn" },
	{ 0x3bc79383, "crypto_grab_skcipher" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x72978037, "crypto_drop_spawn" },
	{ 0xa464b71b, "crypto_cipher_encrypt_one" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0x7ae0248e, "crypto_cipher_decrypt_one" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1a456e89, "crypto_shash_final" },
	{ 0xd8886fa0, "sg_miter_stop" },
	{ 0xf6471863, "crypto_shash_update" },
	{ 0xdb89dd8d, "sg_miter_next" },
	{ 0x5a3a4d92, "sg_miter_start" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xf057aac7, "crypto_spawn_tfm" },
	{ 0xa18e6296, "crypto_spawn_tfm2" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "E2DD3E9C82110E8C4F75C22");
