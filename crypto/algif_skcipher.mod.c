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
	{ 0xabbed009, "af_alg_poll" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0x75a2a6e, "af_alg_release" },
	{ 0x5e0869e2, "af_alg_unregister_type" },
	{ 0xfe08c0f6, "af_alg_register_type" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x26509068, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd81fb8f6, "crypto_skcipher_decrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x1cbd8da7, "af_alg_wmem_wakeup" },
	{ 0x5119c66a, "af_alg_get_rsgl" },
	{ 0x4ec07661, "af_alg_alloc_areq" },
	{ 0x1f6b71f6, "af_alg_wait_for_data" },
	{ 0xcbb2e6f5, "af_alg_free_resources" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc75a30e8, "af_alg_count_tsgl" },
	{ 0x288ed929, "crypto_req_done" },
	{ 0x7fda8a45, "af_alg_async_cb" },
	{ 0x7d8f9be3, "af_alg_sendpage" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcdeede81, "release_sock" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x9206c332, "crypto_alloc_skcipher" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0x1aeb45b5, "crypto_skcipher_setkey" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xba57a578, "sock_kmalloc" },
	{ 0x521a8cde, "af_alg_release_parent" },
	{ 0xd71aac45, "sock_kfree_s" },
	{ 0x1a28de3, "sock_kzfree_s" },
	{ 0x4b74fdc4, "af_alg_pull_tsgl" },
	{ 0xa1b370a9, "af_alg_sendmsg" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "190A33BF4F1D68180B21D49");
