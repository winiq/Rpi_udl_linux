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
	{ 0x86c76eda, "skcipher_walk_aead_decrypt" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x87b8798d, "sg_next" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x6852d6f1, "skcipher_walk_done" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x65d0f538, "skcipher_walk_aead_encrypt" },
	{ 0x7d37efc2, "crypto_unregister_shash" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x654898cc, "crypto_register_shash" },
	{ 0x9e13f6f6, "gf128mul_lle" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb53dfef, "cpu_hwcaps" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x146cea0f, "crypto_unregister_aead" },
	{ 0xb0afc43c, "crypto_register_aead" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "gf128mul");

MODULE_ALIAS("cpu:type:*:feature:*0004*");

MODULE_INFO(srcversion, "0BC0E69E122012C540B9BE7");
