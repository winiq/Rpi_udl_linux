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
	{ 0x2973900, "sock_no_mmap" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x7f871508, "sock_no_ioctl" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0x75a2a6e, "af_alg_release" },
	{ 0x5e0869e2, "af_alg_unregister_type" },
	{ 0xfe08c0f6, "af_alg_register_type" },
	{ 0xf36e7877, "crypto_ahash_digest" },
	{ 0x42de93c6, "crypto_ahash_finup" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xe8991655, "af_alg_make_sg" },
	{ 0xa32c31ff, "iov_iter_advance" },
	{ 0x173541a6, "af_alg_free_sg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0xd7cad581, "crypto_ahash_final" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x26509068, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xd91ddcf5, "af_alg_accept" },
	{ 0xcdeede81, "release_sock" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xdcb764ad, "memset" },
	{ 0x9458179, "crypto_alloc_ahash" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0x4432bce0, "crypto_ahash_setkey" },
	{ 0x288ed929, "crypto_req_done" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xba57a578, "sock_kmalloc" },
	{ 0x521a8cde, "af_alg_release_parent" },
	{ 0xd71aac45, "sock_kfree_s" },
	{ 0x1a28de3, "sock_kzfree_s" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "1D0C28D24FB7FB163BE04BA");
