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
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0xa951517, "sock_no_sendmsg" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x7f871508, "sock_no_ioctl" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0x75a2a6e, "af_alg_release" },
	{ 0x5e0869e2, "af_alg_unregister_type" },
	{ 0xfe08c0f6, "af_alg_register_type" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x3092c783, "crypto_alloc_rng" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0x2f84d7b6, "crypto_rng_reset" },
	{ 0x521a8cde, "af_alg_release_parent" },
	{ 0xd71aac45, "sock_kfree_s" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xba57a578, "sock_kmalloc" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "C2EE585A86B2D95CD64DC74");
