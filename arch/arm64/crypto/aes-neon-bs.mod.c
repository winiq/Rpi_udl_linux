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
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xefc32a9b, "neon_aes_xts_decrypt" },
	{ 0x2e9f361c, "crypto_unregister_skciphers" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xea11590c, "neon_aes_xts_encrypt" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x6852d6f1, "skcipher_walk_done" },
	{ 0x52d67a4e, "neon_aes_cbc_encrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x383c44a3, "crypto_register_skciphers" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd160095a, "skcipher_walk_virt" },
	{ 0xd5f41819, "neon_aes_ecb_encrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb53dfef, "cpu_hwcaps" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "aes-neon-blk,crypto_simd");


MODULE_INFO(srcversion, "DF782C36F098D15DAF35072");
