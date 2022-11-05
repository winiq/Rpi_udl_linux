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
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x2141aa0a, "can_rx_register" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x2f58ccc5, "rtnl_register_module" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd367601c, "nla_put" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0x89404895, "can_send" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x4bcc5870, "netlink_capable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4829a47e, "memcpy" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x314846f5, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "E8E104C099B4047368B98D7");
