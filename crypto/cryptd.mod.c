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
	{ 0x9206c332, "crypto_alloc_skcipher" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4ff80b68, "ahash_register_instance" },
	{ 0x1f7fbd71, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xab89a8c9, "shash_ahash_digest" },
	{ 0x3bc79383, "crypto_grab_skcipher" },
	{ 0x621a4a7c, "crypto_unregister_template" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x1a456e89, "crypto_shash_final" },
	{ 0xe5a70d6f, "shash_ahash_finup" },
	{ 0x6eb54550, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xda7d76cd, "crypto_shash_alg_has_setkey" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x51b31982, "crypto_grab_shash" },
	{ 0xdcb764ad, "memset" },
	{ 0x6bcc513e, "crypto_grab_aead" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x53a543d0, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x54674230, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x72978037, "crypto_drop_spawn" },
	{ 0xad1d9417, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xf090ef47, "crypto_enqueue_request" },
	{ 0xd81fb8f6, "crypto_skcipher_decrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x1aeb45b5, "crypto_skcipher_setkey" },
	{ 0x8751e98a, "crypto_aead_setauthsize" },
	{ 0x3d153805, "crypto_alloc_aead" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xa18e6296, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0x56cd0d78, "shash_ahash_update" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x314cd2d8, "aead_register_instance" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9458179, "crypto_alloc_ahash" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "84A51E70A4BA769D4514B8D");
