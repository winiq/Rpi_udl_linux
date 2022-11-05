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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd9762a53, "ip6_route_output_flags" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x5f765358, "__pskb_copy_fclone" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x72298d2f, "ip6_local_out" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "4BA193ED1C706091CA2EA4D");
