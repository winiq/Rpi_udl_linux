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
	{ 0xcdeede81, "release_sock" },
	{ 0xb2ff8255, "sctp_transport_lookup_process" },
	{ 0x9868cd, "inet_diag_unregister" },
	{ 0xac824b24, "inet_diag_msg_attrs_fill" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xd367601c, "nla_put" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0xa793ef4e, "nla_reserve_64bit" },
	{ 0x868649c5, "inet_diag_msg_common_fill" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcdf7e1b1, "sock_diag_check_cookie" },
	{ 0x98c37d6d, "sock_diag_save_cookie" },
	{ 0x8faa70ae, "nla_reserve" },
	{ 0xd868acbb, "inet_diag_register" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x11f3b0af, "sctp_transport_traverse_process" },
	{ 0xc6da368a, "sctp_get_sctp_info" },
	{ 0xb99bed53, "sctp_for_each_endpoint" },
	{ 0x11e2af69, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "A065C894CB3A07E6CD8CAC7");
