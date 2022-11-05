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
	{ 0xb0443cda, "nfnetlink_subsys_unregister" },
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0x9a1c71a8, "nfnetlink_subsys_register" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0x92997ed8, "_printk" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd0a04e39, "nfnetlink_unicast" },
	{ 0xd367601c, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x8faa70ae, "nla_reserve" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdb51109c, "xt_check_match" },
	{ 0x8546a428, "nft_request_module" },
	{ 0x9e4441dd, "xt_check_target" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7adcfd84, "xt_request_find_match" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x811a363a, "xt_request_find_target" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x37a0cba, "kfree" },
	{ 0x6587c97e, "module_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables,x_tables");


MODULE_INFO(srcversion, "EF227717735F9E251AF9688");
