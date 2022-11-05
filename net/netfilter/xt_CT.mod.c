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
	{ 0x43bcd2f6, "xt_unregister_targets" },
	{ 0x63d7d6d6, "xt_unregister_target" },
	{ 0x68921f19, "xt_register_targets" },
	{ 0x2e6b36a6, "xt_register_target" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf2190e85, "nf_ct_helper_ext_add" },
	{ 0x67945f10, "nf_conntrack_helper_try_module_get" },
	{ 0xf7a76878, "nf_conntrack_helper_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x2bf17552, "nf_ct_ext_add" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0x46ca6d68, "nf_ct_tmpl_free" },
	{ 0xe84c082, "nf_ct_tmpl_alloc" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "C013D983E5ACFDD4EEF3CFF");
