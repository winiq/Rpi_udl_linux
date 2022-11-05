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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x337be4b0, "netlink_has_listeners" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x23af5a0, "nlmsg_notify" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4b24c57c, "netlink_kernel_release" },
	{ 0xa47aaf4e, "netlink_rcv_skb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x6587c97e, "module_put" },
	{ 0xeea50d0c, "netlink_broadcast" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0xb74d577, "netlink_ack" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x17be2200, "netlink_set_err" },
	{ 0x6c1b521f, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x11e2af69, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B4F4F5B65132E8C2FE5F0FE");
