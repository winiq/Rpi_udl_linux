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
	{ 0x53b954a2, "up_read" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2d3fa0c8, "crypto_mod_put" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0x229d0e90, "crypto_remove_spawns" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf3a20819, "crypto_mod_get" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x4b24c57c, "netlink_kernel_release" },
	{ 0xc16e4fc, "crypto_unregister_instance" },
	{ 0xa47aaf4e, "netlink_rcv_skb" },
	{ 0xd367601c, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4bcc5870, "netlink_capable" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x6c1b521f, "__netlink_kernel_create" },
	{ 0x73ead729, "crypto_alg_mod_lookup" },
	{ 0x35d3dc46, "crypto_alg_sem" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0xcbdda75c, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF49682A53F1A3578A58062");
