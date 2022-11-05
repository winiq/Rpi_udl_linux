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
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x16305f1d, "nf_ct_helper_init" },
	{ 0x786270c, "nf_ct_expect_init" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x53f52742, "nf_conntrack_helpers_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x824834fe, "nf_ct_expect_put" },
	{ 0xcfa9ba77, "nf_ct_expect_alloc" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0x4168aa02, "nf_conntrack_helpers_unregister" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5263429, "nf_ct_helper_log" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x6cae3983, "param_ops_ushort" },
	{ 0xe4e0dd93, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "E0167E8073C2281FA0B814E");
