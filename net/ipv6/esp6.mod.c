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
	{ 0x86e8378a, "xfrm6_protocol_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1401c157, "skb_to_sgvec" },
	{ 0xeef295f8, "xfrm_dev_resume" },
	{ 0xf62c72aa, "xfrm_unregister_type" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc18abe1, "pskb_put" },
	{ 0x28cddc39, "skb_page_frag_refill" },
	{ 0x28c1e296, "skb_cow_data" },
	{ 0xdadcb78f, "ip6_redirect" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x8aadcc0f, "xfrm_input_resume" },
	{ 0xdcb764ad, "memset" },
	{ 0x72c4b0c, "skb_checksum" },
	{ 0x96062614, "xfrm_input" },
	{ 0xb7377510, "skb_push" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x88b02222, "crypto_aead_encrypt" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xad1d9417, "crypto_aead_setkey" },
	{ 0xeeb47394, "xfrm_register_type" },
	{ 0x10404aaa, "xfrm_state_mtu" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0xca55c602, "make_kuid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xdc5f2e64, "xfrm_output_resume" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9b8ea88, "ip6_update_pmtu" },
	{ 0x5240024d, "skb_pull_rcsum" },
	{ 0x85f04548, "__xfrm_state_destroy" },
	{ 0x9dacb285, "km_new_mapping" },
	{ 0x893dd312, "crypto_aead_decrypt" },
	{ 0x8751e98a, "crypto_aead_setauthsize" },
	{ 0x3d153805, "crypto_alloc_aead" },
	{ 0x672e6ca3, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x555e0f27, "___pskb_trim" },
	{ 0xb81e522e, "__skb_ext_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x7deebb17, "xfrm6_rcv" },
	{ 0x6197c046, "__put_page" },
	{ 0x707712df, "xfrm6_protocol_deregister" },
};

MODULE_INFO(depends, "ipv6,xfrm_algo");


MODULE_INFO(srcversion, "B6130A8B49F1E5DE197836B");
