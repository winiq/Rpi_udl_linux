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
	{ 0x60b2c62c, "dev_add_offload" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xfb99fcca, "dev_remove_offload" },
	{ 0xb7377510, "skb_push" },
	{ 0x6ab45e1d, "skb_mac_gso_segment" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x5240024d, "skb_pull_rcsum" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E4F6C8CC2CE322FCF066423");
