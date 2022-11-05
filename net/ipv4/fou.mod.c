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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x1533ec67, "genl_register_family" },
	{ 0xead00af0, "genl_unregister_family" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x61ec71e7, "inet6_offloads" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xd80a9520, "udp_sock_create6" },
	{ 0x4c7f7973, "setup_udp_tunnel_sock" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb25007db, "udp_tunnel_sock_release" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0xd367601c, "nla_put" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9ac478ac, "__skb_get_hash" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0x8eab5063, "iptunnel_handle_offloads" },
	{ 0x57c31396, "inet_offloads" },
	{ 0x37a0cba, "kfree" },
	{ 0x61ac310c, "genlmsg_put" },
	{ 0x6e938f72, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x338daa43, "inet_get_local_port_range" },
	{ 0x86ce8df8, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "69ACF53A51E18745A758356");
