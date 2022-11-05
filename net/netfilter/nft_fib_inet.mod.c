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
	{ 0xb3c36947, "nft_fib_policy" },
	{ 0x28b8452, "nft_fib_validate" },
	{ 0x3cf3d187, "nft_fib_dump" },
	{ 0x52cde233, "nft_fib_init" },
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0x191aea70, "nft_fib4_eval" },
	{ 0xe074a4ce, "nft_fib4_eval_type" },
	{ 0x27fb6b77, "nft_fib6_eval" },
	{ 0x8844ddf4, "nft_fib6_eval_type" },
};

MODULE_INFO(depends, "nft_fib,nf_tables,nft_fib_ipv4,nft_fib_ipv6");


MODULE_INFO(srcversion, "8963EDAD1CEB92E8D3C7875");
