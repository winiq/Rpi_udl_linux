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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0x86f341c, "write_bytes_to_xdr_buf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0x8e4a83a8, "gss_mech_register" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xd7cad581, "crypto_ahash_final" },
	{ 0x1467e736, "crypto_alloc_sync_skcipher" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x33b83ce1, "xdr_buf_subsegment" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd81fb8f6, "crypto_skcipher_decrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xed3df0ea, "gss_mech_unregister" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x1aeb45b5, "crypto_skcipher_setkey" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4432bce0, "crypto_ahash_setkey" },
	{ 0x8c8c09ea, "read_bytes_from_xdr_buf" },
	{ 0x1a07529b, "xdr_process_buf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf0b97047, "xdr_buf_trim" },
	{ 0x9458179, "crypto_alloc_ahash" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "35655CE2551B09A2E12EDBE");
