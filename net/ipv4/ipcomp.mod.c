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
	{ 0xc6a13a96, "ipcomp_output" },
	{ 0x53db7643, "ipcomp_input" },
	{ 0x155aaa13, "ipcomp_destroy" },
	{ 0x1548b078, "xfrm4_protocol_deregister" },
	{ 0xf62c72aa, "xfrm_unregister_type" },
	{ 0xf82d937c, "xfrm4_protocol_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xeeb47394, "xfrm_register_type" },
	{ 0xf3f6f46b, "xfrm_state_insert" },
	{ 0x4ba26e1a, "xfrm_init_state" },
	{ 0x490173ad, "xfrm_state_alloc" },
	{ 0x9935b528, "ipcomp_init_state" },
	{ 0x85f04548, "__xfrm_state_destroy" },
	{ 0xfa8871f3, "ipv4_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8624c04, "ipv4_redirect" },
	{ 0x672e6ca3, "xfrm_state_lookup" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "FC13258E5F97D2DFDCF1FF1");
