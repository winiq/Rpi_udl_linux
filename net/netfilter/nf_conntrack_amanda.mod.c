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
	{ 0x112b58d2, "__nf_ct_refresh_acct" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x786270c, "nf_ct_expect_init" },
	{ 0x7476ba4e, "textsearch_prepare" },
	{ 0x53f52742, "nf_conntrack_helpers_register" },
	{ 0x7c0b18f0, "skb_find_text" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0x824834fe, "nf_ct_expect_put" },
	{ 0xcfa9ba77, "nf_ct_expect_alloc" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0x4168aa02, "nf_conntrack_helpers_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5263429, "nf_ct_helper_log" },
	{ 0x95f2af43, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0xe4e0dd93, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "460C2EB96D19FD5418A5333");
