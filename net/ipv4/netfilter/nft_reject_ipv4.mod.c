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
	{ 0x6081751d, "nft_reject_policy" },
	{ 0x16366635, "nft_reject_validate" },
	{ 0x59e38907, "nft_reject_dump" },
	{ 0xbe7860ef, "nft_reject_init" },
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0xa5e676ae, "nf_send_unreach" },
	{ 0xfe4a0aa1, "nf_send_reset" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4");


MODULE_INFO(srcversion, "2F408E6DDD02BDAC01D130C");
