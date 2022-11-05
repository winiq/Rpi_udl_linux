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
	{ 0xd86aadac, "inet6_del_offload" },
	{ 0x7dbd6333, "xfrm_unregister_type_offload" },
	{ 0x635466f0, "inet6_add_offload" },
	{ 0x92997ed8, "_printk" },
	{ 0x2d40b39c, "xfrm_register_type_offload" },
	{ 0x6ab45e1d, "skb_mac_gso_segment" },
	{ 0x61ec71e7, "inet6_offloads" },
	{ 0x672e6ca3, "xfrm_state_lookup" },
	{ 0x435b0a33, "secpath_set" },
	{ 0x96062614, "xfrm_input" },
	{ 0x762989e, "xfrm_parse_spi" },
	{ 0xb81e522e, "__skb_ext_del" },
	{ 0x22a49578, "esp6_output_tail" },
	{ 0xab402357, "skb_ext_add" },
	{ 0x82fdf9e5, "esp6_output_head" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0xb7377510, "skb_push" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x244b484a, "esp6_input_done2" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "D1CCE3653CAE1D640E1EE65");
