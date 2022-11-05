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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xa84ce9e0, "crypto_aes_inv_sbox" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x86592ac3, "crypto_alloc_shash" },
	{ 0x2e9f361c, "crypto_unregister_skciphers" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0x6852d6f1, "skcipher_walk_done" },
	{ 0x383c44a3, "crypto_register_skciphers" },
	{ 0x1cc0feea, "crypto_register_shashes" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2391f725, "irq_stat" },
	{ 0xd160095a, "skcipher_walk_virt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb53dfef, "cpu_hwcaps" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xd9d952d1, "crypto_aes_sbox" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xf96304d0, "crypto_shash_tfm_digest" },
	{ 0x8a61612a, "crypto_unregister_shashes" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "crypto_simd");


MODULE_INFO(srcversion, "E4B3517A0E42EB8D0CF3310");
