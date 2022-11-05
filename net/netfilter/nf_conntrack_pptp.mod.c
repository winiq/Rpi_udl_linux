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
	{ 0x1479cc1c, "nf_ct_unexpect_related" },
	{ 0x490a2d66, "nf_conntrack_helper_register" },
	{ 0x6e7bfec6, "nf_ct_gre_keymap_add" },
	{ 0xaf7524d7, "nf_conntrack_helper_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x786270c, "nf_ct_expect_init" },
	{ 0x4e74c00c, "nf_ct_delete" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xe47cee7d, "nf_ct_expect_find_get" },
	{ 0x824834fe, "nf_ct_expect_put" },
	{ 0xcfa9ba77, "nf_ct_expect_alloc" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0x7ba8b3b7, "nf_ct_gre_keymap_destroy" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xc9d3af78, "nf_conntrack_find_get" },
	{ 0x2bf17552, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "7A068D945736463742415AE");
