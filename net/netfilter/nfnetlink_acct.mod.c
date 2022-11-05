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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x98cf60b3, "strlen" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xb0443cda, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xd367601c, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0xd0a04e39, "nfnetlink_unicast" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6587c97e, "module_put" },
	{ 0x36cccaf6, "nfnetlink_broadcast" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x9a1c71a8, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xcbdda75c, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "29788C5ECBF8961BEE2E816");
