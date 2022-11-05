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
	{ 0x96062614, "xfrm_input" },
	{ 0xb8d4d7de, "xfrm4_rcv" },
	{ 0x1548b078, "xfrm4_protocol_deregister" },
	{ 0xf62c72aa, "xfrm_unregister_type" },
	{ 0xf82d937c, "xfrm4_protocol_register" },
	{ 0xeeb47394, "xfrm_register_type" },
	{ 0x8aadcc0f, "xfrm_input_resume" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xf36e7877, "crypto_ahash_digest" },
	{ 0x6ee2a26a, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb7377510, "skb_push" },
	{ 0x28c1e296, "skb_cow_data" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x85f04548, "__xfrm_state_destroy" },
	{ 0xfa8871f3, "ipv4_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8624c04, "ipv4_redirect" },
	{ 0x672e6ca3, "xfrm_state_lookup" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x4432bce0, "crypto_ahash_setkey" },
	{ 0x9458179, "crypto_alloc_ahash" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdc5f2e64, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "EC529AE4DAD0D2FEADAA97E");