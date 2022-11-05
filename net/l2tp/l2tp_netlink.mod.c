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
	{ 0xa24f23d8, "__request_module" },
	{ 0xdf848bdb, "l2tp_tunnel_get_nth" },
	{ 0xe5b59a36, "l2tp_session_dec_refcount" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0x1533ec67, "genl_register_family" },
	{ 0x987d294b, "l2tp_tunnel_get_session" },
	{ 0x98cf60b3, "strlen" },
	{ 0xead00af0, "genl_unregister_family" },
	{ 0x8c24b4be, "l2tp_tunnel_register" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd367601c, "nla_put" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x5a048275, "l2tp_tunnel_create" },
	{ 0xd5a87f49, "l2tp_tunnel_get" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x67eb60fe, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x736d995c, "l2tp_session_get_by_ifname" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xb8b872a7, "genlmsg_multicast_allns" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x61ac310c, "genlmsg_put" },
	{ 0x31151986, "l2tp_tunnel_delete" },
	{ 0x63282bcd, "l2tp_tunnel_inc_refcount" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa390a9fb, "l2tp_tunnel_dec_refcount" },
	{ 0x4a0caa5a, "l2tp_session_set_header_len" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "3326FBAA007165FC90EA19F");
