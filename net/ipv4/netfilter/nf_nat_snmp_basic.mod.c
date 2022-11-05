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
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x490a2d66, "nf_conntrack_helper_register" },
	{ 0xaf7524d7, "nf_conntrack_helper_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd0411bd2, "skb_ensure_writable" },
	{ 0xfed5fde9, "nf_nat_snmp_hook" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc5263429, "nf_ct_helper_log" },
	{ 0xe113bbbc, "csum_partial" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_snmp");


MODULE_INFO(srcversion, "F9A637915F8F4B12ACC2B5A");
