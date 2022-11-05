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
	{ 0xaad5ec31, "crypto_unregister_scomp" },
	{ 0x4ebb65c, "crypto_unregister_alg" },
	{ 0x3b801fe7, "crypto_register_scomp" },
	{ 0xe0a3f53b, "crypto_register_alg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x578a408b, "ZSTD_initDCtx" },
	{ 0xa5ac3e33, "ZSTD_DCtxWorkspaceBound" },
	{ 0xe27a2dd, "ZSTD_initCCtx" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xefe4f679, "ZSTD_CCtxWorkspaceBound" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x999e8297, "vfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1a107de2, "ZSTD_compressCCtx" },
	{ 0xe41476d9, "ZSTD_getParams" },
	{ 0x1a1bac9c, "ZSTD_decompressDCtx" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CE7F540C652CDAD26289554");
