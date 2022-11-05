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
	{ 0x4f7f5e63, "nft_unregister_obj" },
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0x6c519fff, "nft_register_obj" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xb9f769d3, "metadata_dst_alloc" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x9e70eed6, "nft_parse_register_store" },
	{ 0xb9154e68, "nft_dump_register" },
	{ 0xd367601c, "nla_put" },
	{ 0x54113cf4, "dst_release" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x42cf9867, "metadata_dst_free" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "7DF56DB495F7064FC1CC798");
