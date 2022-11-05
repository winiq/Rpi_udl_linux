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
	{ 0xe41fd9ff, "nf_ct_remove_expectations" },
	{ 0x1479cc1c, "nf_ct_unexpect_related" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x490a2d66, "nf_conntrack_helper_register" },
	{ 0x112b58d2, "__nf_ct_refresh_acct" },
	{ 0xaf7524d7, "nf_conntrack_helper_unregister" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x786270c, "nf_ct_expect_init" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ebcac9a, "nf_ip_route" },
	{ 0x53f52742, "nf_conntrack_helpers_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x824834fe, "nf_ct_expect_put" },
	{ 0xcfa9ba77, "nf_ct_expect_alloc" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0x4168aa02, "nf_conntrack_helpers_unregister" },
	{ 0xb8b4a81, "__nf_ct_expect_find" },
	{ 0xe8143a25, "nf_ipv6_ops" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc5263429, "nf_ct_helper_log" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0xe4e0dd93, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "773E3DC368DC2C49F38EF65");
