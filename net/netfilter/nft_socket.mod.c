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
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb9154e68, "nft_dump_register" },
	{ 0xd367601c, "nla_put" },
	{ 0xf5e852e0, "nf_sk_lookup_slow_v6" },
	{ 0x3fd79554, "sock_gen_put" },
	{ 0x728ff389, "nf_sk_lookup_slow_v4" },
	{ 0x9e70eed6, "nft_parse_register_store" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nf_tables,nf_socket_ipv6,nf_socket_ipv4");


MODULE_INFO(srcversion, "1F40A0D96235DD28503BBFA");